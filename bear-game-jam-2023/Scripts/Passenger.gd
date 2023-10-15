extends Node

var has_passenger = false

func _process(delta):
	if get_tree().get_current_scene().get_name() == "Menu":
		has_passenger = false
