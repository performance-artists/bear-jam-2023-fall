extends Area3D

@onready var audio_stream_player = $AudioStreamPlayer

var check = true

func _on_body_entered(body):
	if check:
		check = false
		print(body)
		if GlobalHealth.value <= 80:
			GlobalHealth.value += 20
		else:
			GlobalHealth.value = 100
		audio_stream_player.play()
		hide()
		await get_tree().create_timer(30.0).timeout
		show()
		check = true
