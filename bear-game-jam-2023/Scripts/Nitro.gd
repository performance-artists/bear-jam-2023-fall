extends Node3D

var value = 0

func _physics_process(delta):
	if get_tree().get_current_scene().get_name() != "Menu":
		value += delta * 2
	if value > 100:
		value = 100
