extends CharacterBody3D

const speed = 5.0
const accel = 10.0

@onready var nav: NavigationAgent3D = $NavigationAgent3D
@onready var Target = $"../Car"



func _physics_process(delta):
	
	var direction = Vector3()
	nav.target_position = Target.global_position
	
	var next_position = nav.get_next_path_position()
	direction = next_position - global_position
	
	direction = direction.normalized()
	if next_position.distance_to(global_position) > 0.01:
		look_at(next_position,Vector3.UP)
		
	velocity = velocity.lerp(direction * speed , accel * delta)
	move_and_slide()
