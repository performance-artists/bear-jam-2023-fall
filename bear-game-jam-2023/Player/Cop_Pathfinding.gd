extends CharacterBody3D

const speed = 7.5
const accel = 10.0

@onready var nav: NavigationAgent3D = $NavigationAgent3D
@onready var Target = $"../../Car"
@onready var root_node = $car_police/RootNode
@onready var burnt = $car_police/burnt

var crashed = false
var delete_cooldown = 0

var stuck_cooldown = 0

func _physics_process(delta):
	
	if not crashed:
		
		var direction = Vector3()
		nav.target_position = Target.global_position
		
		var next_position = nav.get_next_path_position()
		direction = next_position - global_position
		
		direction = direction.normalized()
		if next_position.distance_to(global_position) > 1:
			look_at(next_position,Vector3.UP)
		if global_position.distance_to(Target.global_position) < 4:
			GlobalHealth.value -= 0.005
		velocity = velocity.lerp(direction * speed , accel * delta)
		move_and_slide()
		
	else:
		
		delete_cooldown += delta
		root_node.set_visible(false)
		burnt.set_visible(true)
		if delete_cooldown >= 5:
			self.queue_free()
