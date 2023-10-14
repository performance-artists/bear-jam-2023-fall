extends RigidBody3D

var timer = randf_range(2, 6)

func _process(delta):
	timer -= delta
	if timer <= 0:
		queue_free()
