extends Button

@onready var animation_player = $"../AnimationPlayer"

func _ready():
	animation_player.play_backwards("fade")

func _on_pressed():
	animation_player.play("fade")
	await animation_player.animation_finished
	get_tree().change_scene_to_file("res://Scenes/Nick.tscn")
