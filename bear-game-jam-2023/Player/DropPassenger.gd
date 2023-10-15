extends Area3D

@onready var audio_stream_player = $"../AudioStreamPlayer"

func _on_body_entered(body):
	if body.name == "Car" and GlobalPassenger.has_passenger:
		GlobalPassenger.has_passenger = false
		audio_stream_player.play()
		GlobalXP.value += 20
		GlobalTimer.value += 15
