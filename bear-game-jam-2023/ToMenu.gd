extends Button

func _on_pressed():
	print("aaa")
	get_tree().change_scene_to_file("res://Scenes/Menu.tscn")
