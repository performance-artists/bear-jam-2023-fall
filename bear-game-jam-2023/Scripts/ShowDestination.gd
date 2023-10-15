extends Node3D

func _process(delta):
	if GlobalPassenger.has_passenger:
		self.set_visible(true)
	else:
		self.set_visible(false)
		global_position = Vector3(randi() % 100, 0.22, randi() % 100)
