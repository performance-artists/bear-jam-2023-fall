extends Area3D

@onready var audio_stream_player = $AudioStreamPlayer

func _on_body_entered(body):
	print(body)
	if GlobalHealth.value <= 80:
		GlobalHealth.value += 20
	else:
		GlobalHealth.value = 100
	audio_stream_player.play()
	hide()
	await get_tree().create_timer(30.0).timeout
	show()
