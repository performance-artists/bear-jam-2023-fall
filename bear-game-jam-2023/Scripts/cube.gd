extends RigidBody3D

var timer = randf_range(1, 3)

func _process(delta):
#	apply_central_impulse(Vector3(
#		randf_range(-1, 1), randf_range(-1, 1),
#		randf_range(-1, 1)
#	))
	timer -= delta
	if timer <= 0:
		queue_free()
