extends Node3D

var value = 0

var second_cooldown = 0

func _physics_process(delta):
	second_cooldown += delta
	if second_cooldown >= 2:
		second_cooldown = 0
		value += 1
