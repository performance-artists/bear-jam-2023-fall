extends Node3D

var spawn_cooldown = 5
var cooldown = 5

var cop_model = load("res://Player/Cop.tscn")

func _process(delta):
	cooldown += delta
	if cooldown > 5:
		cooldown = 0
		var cop = cop_model.instantiate()
		add_child(cop)
