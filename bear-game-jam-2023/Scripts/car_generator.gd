extends Node3D

const gen_time = 20
var temp_time = 0

var npc_node = preload("res://Player/npc.tscn")

func _ready():
	temp_time = gen_time

func _process(delta):
	if temp_time <= 0:
		var npc = npc_node.instantiate()
		add_child(npc)
		temp_time = gen_time
	temp_time -= delta
