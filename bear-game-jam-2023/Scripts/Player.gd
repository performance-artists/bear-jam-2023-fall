extends RigidBody3D

@onready var car_mesh = $CarMesh
@onready var body_mesh = $CarMesh/RootNode
@onready var ground_ray = $CarMesh/RayCast3D
@onready var right_wheel = $CarMesh/RootNode/car_taxi/car_taxi_wheel_front_right
@onready var left_wheel = $CarMesh/RootNode/car_taxi/car_taxi_wheel_front_left
@onready var particle = $CarMesh/RootNode/car_taxi/Particle
@onready var brake_sfx_player = $BrakeSfxPlayer
@onready var running_sfx_player = $RunningSfxPlayer
@onready var car_taxi = $CarMesh/RootNode/car_taxi
@onready var car_taxi_destroyed = $CarMesh/RootNode/car_taxi_destroyed
@onready var explosion = $Explosion


# Where to place the car mesh relative to the sphere
var sphere_offset = Vector3.DOWN
# Engine power
var acceleration = 15.0
# Turn amount, in degrees
var steering = 18.0
# How quickly the car turns
var turn_speed = 10.0
# Below this speed, the car doesn't turn
var turn_stop_limit = 0.75

# Variables for input values
var speed_input = 0
var turn_input = 0
var using_skill = false
var starting_running_sfx_volume
var brake_sfx_timer = 0
var prev_linear_velocity = [0, 0, 0]

var destroyed = false

@export var brake_sfx_1: AudioStream
@export var brake_sfx_2: AudioStream
@export var brake_sfx_3: AudioStream

func _ready():
	starting_running_sfx_volume = running_sfx_player.volume_db
	randomize()
	contact_monitor = true
	max_contacts_reported = 1

func _physics_process(delta):
	car_mesh.position = sphere_offset
	#Crash
	if (abs(linear_velocity.x) + abs(linear_velocity.z) - abs(prev_linear_velocity[0]) - abs(prev_linear_velocity[2]) + 1 < 0):
		GlobalHealth.value -= abs(abs(linear_velocity.x) + abs(linear_velocity.z) - abs(prev_linear_velocity[0]) - abs(prev_linear_velocity[2]) + 1)
		explosion.play()
	prev_linear_velocity = linear_velocity
	#Move
	if GlobalHealth.value > 0:
		destroyed = false
		apply_central_force(-car_mesh.global_transform.basis.z * speed_input)
		car_taxi_destroyed.hide()
		car_taxi.show()
	else:
		if not destroyed:
			car_taxi_destroyed.show()
			car_taxi.hide()
			explosion.play()
			destroyed = true
	if speed_input != 0:
		running_sfx_player.volume_db = starting_running_sfx_volume
	else:
		running_sfx_player.volume_db = starting_running_sfx_volume - 80

func _process(delta):
	
	brake_sfx_timer -= delta
	acceleration -= 1
	if acceleration < 15:
		acceleration = 15
		using_skill = false
	#if not ground_ray.is_colliding():
	#	return
	speed_input = Input.get_axis("ui_down", "ui_up") * acceleration
	turn_input = Input.get_axis("ui_right", "ui_left") * deg_to_rad(steering)
	right_wheel.rotation.y = turn_input
	left_wheel.rotation.y = turn_input
	
	if turn_input and abs(linear_velocity.x) > 0.2 and abs(linear_velocity.z) > 0.2:
		particle.emitting = true
		play_brake_sfx()
	else:
		particle.emitting = false
	
	# rotate car mesh
	if linear_velocity.length() > turn_stop_limit:
		var new_basis = car_mesh.global_transform.basis.rotated(car_mesh.global_transform.basis.y, turn_input)
		car_mesh.global_transform.basis = car_mesh.global_transform.basis.slerp(new_basis, turn_speed * delta)
		car_mesh.global_transform = car_mesh.global_transform.orthonormalized()
		
	if ground_ray.is_colliding():
		var n = ground_ray.get_collision_normal()
		var xform = align_with_y(car_mesh.global_transform, n)
		car_mesh.global_transform = car_mesh.global_transform.interpolate_with(xform, 10.0 * delta)
	
	if Input.is_action_just_pressed("ui_accept"):
		acceleration = 40
		using_skill = true
		
func get_skill_status():
	return using_skill

func align_with_y(xform, new_y):
	xform.basis.y = new_y
	xform.basis.x = -xform.basis.z.cross(new_y)
	xform.basis = xform.basis.orthonormalized()
	return xform.orthonormalized()

func play_brake_sfx():
	if brake_sfx_timer > 0:
		return
		
	brake_sfx_timer = 5

	var random_number = randi() % 3
	match(random_number):
		0:
			brake_sfx_player.stream = brake_sfx_1
		1:
			brake_sfx_player.stream = brake_sfx_2
		2:
			brake_sfx_player.stream = brake_sfx_3

	brake_sfx_player.play()


func _on_body_entered(body):
	print(body.name)
	if (body.name.substr(0,3) == "Cop" or body.name.substr(1,3) == "Cha") and (abs(linear_velocity.x) + abs(linear_velocity.z) > 3):
		body.crashed = true
