extends Node3D

var spawn_cooldown = 5
var cooldown = 0

var cop_model = load("res://Player/Cop.tscn")
@onready var Target = $"../Car"

func _process(delta):
	cooldown += delta
	if cooldown > spawn_cooldown and PoliceManager.current_police_total < PoliceManager.police_limit:
		PoliceManager.current_police_total += 1
		cooldown = 0
		var cop = cop_model.instantiate()
		cop.global_position = Target.global_position + Vector3(randi() % 30, 0.186, randi() % 30)
		add_child(cop)
