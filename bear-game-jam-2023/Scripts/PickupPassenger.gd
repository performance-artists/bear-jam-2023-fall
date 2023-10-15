extends Area3D

func _on_body_entered(body):
	if body.name == "Car" and not GlobalPassenger.has_passenger:
		GlobalPassenger.has_passenger = true
