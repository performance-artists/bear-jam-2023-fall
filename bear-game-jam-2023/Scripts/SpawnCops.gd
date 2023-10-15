extends Node3D

var spawn_cooldown = 5
var cooldown = 5

var cop_model = load("res://Player/Cop.tscn")

func _process(delta):
	cooldown += delta
	if cooldown > 5 and PoliceManager.current_police_total < PoliceManager.police_limit:
		PoliceManager.current_police_total += 1
		cooldown = 0
		var cop = cop_model.instantiate()
		add_child(cop)
