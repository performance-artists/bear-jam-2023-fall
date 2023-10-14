extends RigidBody3D

@onready var car_mesh = $CarMesh
@onready var body_mesh = $CarMesh/RootNode
@onready var ground_ray = $CarMesh/RayCast3D
@onready var right_wheel = $CarMesh/RootNode/car_taxi/car_taxi_wheel_front_right
@onready var left_wheel = $CarMesh/RootNode/car_taxi/car_taxi_wheel_front_left

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

func _physics_process(delta):
	car_mesh.position = sphere_offset
	#if ground_ray.is_colliding():
	apply_central_force(-car_mesh.global_transform.basis.z * speed_input)

func _process(delta):
	#if not ground_ray.is_colliding():
	#	return
	speed_input = Input.get_axis("ui_down", "ui_up") * acceleration
	turn_input = Input.get_axis("ui_right", "ui_left") * deg_to_rad(steering)
	right_wheel.rotation.y = turn_input
	left_wheel.rotation.y = turn_input
	
	# rotate car mesh
	if linear_velocity.length() > turn_stop_limit:
		var new_basis = car_mesh.global_transform.basis.rotated(car_mesh.global_transform.basis.y, turn_input)
		car_mesh.global_transform.basis = car_mesh.global_transform.basis.slerp(new_basis, turn_speed * delta)
		car_mesh.global_transform = car_mesh.global_transform.orthonormalized()
		
	if ground_ray.is_colliding():
		var n = ground_ray.get_collision_normal()
		var xform = align_with_y(car_mesh.global_transform, n)
		car_mesh.global_transform = car_mesh.global_transform.interpolate_with(xform, 10.0 * delta)

func align_with_y(xform, new_y):
	xform.basis.y = new_y
	xform.basis.x = -xform.basis.z.cross(new_y)
	xform.basis = xform.basis.orthonormalized()
	return xform.orthonormalized()
