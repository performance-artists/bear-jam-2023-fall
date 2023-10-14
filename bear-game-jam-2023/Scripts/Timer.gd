extends Node

const DEFAULT_VALUE = 10

var value = DEFAULT_VALUE

func _physics_process(delta):
	if get_tree().get_current_scene().get_name() == "Menu":
		value = DEFAULT_VALUE
	else:
		value -= delta
