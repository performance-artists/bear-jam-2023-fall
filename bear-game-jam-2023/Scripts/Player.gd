extends CharacterBody3D


var SPEED = 5.0
const JUMP_VELOCITY = 4.5
const ROTATE_SPEED = 10
var IS_PICKINGUP = false
var PICKUP_DELAY = 0

# Get the gravity from the project settings to be synced with RigidBody nodes.
var gravity = ProjectSettings.get_setting("physics/3d/default_gravity")

@onready var animation_player = $Visual/Player/AnimationPlayer
@onready var visual = $Visual

var walking = false
var look_direction = Vector3.ZERO

func _physics_process(delta):
	# PickUp on.
	if IS_PICKINGUP:
		PICKUP_DELAY += delta
	if PICKUP_DELAY >= 1.25:
		IS_PICKINGUP = false
	
	# Add the gravity.
	if not is_on_floor():
		velocity.y -= gravity * delta

	# Handle Jump.
	if Input.is_action_just_pressed("ui_accept") and is_on_floor() and not IS_PICKINGUP:
		XP.value += 1 # debugging test XP
		animation_player.play("PickUp")
		#velocity.y = JUMP_VELOCITY
		IS_PICKINGUP = true

	# Get the input direction and handle the movement/deceleration.
	# As good practice, you should replace UI actions with custom gameplay actions.
	var input_dir = Input.get_vector("ui_left", "ui_right", "ui_up", "ui_down")
	var direction = (transform.basis * Vector3(input_dir.x, 0, input_dir.y)).normalized()
	if direction and not IS_PICKINGUP:
		look_direction = look_direction.lerp(direction, delta * ROTATE_SPEED).normalized()
		
		velocity.x = direction.x * SPEED
		velocity.z = direction.z * SPEED
		
		visual.look_at(look_direction + position)
		
		walking = true
		
		if Input.is_key_pressed(KEY_SHIFT):
			SPEED = 10.0
			animation_player.play("Run")
		else:
			SPEED = 5.0
			animation_player.play("Walk")
			
	elif not IS_PICKINGUP:
		velocity.x = move_toward(velocity.x, 0, SPEED)
		velocity.z = move_toward(velocity.z, 0, SPEED)
		
		if walking:
			walking = false
			animation_player.play("Idle")
	
	if not IS_PICKINGUP:
		move_and_slide()
