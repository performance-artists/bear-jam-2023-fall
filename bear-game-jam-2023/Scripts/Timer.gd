extends Node

var value = 60

func _physics_process(delta):
	value -= delta
