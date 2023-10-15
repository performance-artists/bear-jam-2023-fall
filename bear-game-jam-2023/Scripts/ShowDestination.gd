extends Node3D

func _process(delta):
	if GlobalPassenger.has_passenger:
		self.set_visible(true)
	else:
		self.set_visible(false)
