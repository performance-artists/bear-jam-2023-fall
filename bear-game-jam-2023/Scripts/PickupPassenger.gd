extends Area3D

@onready var passenger = $".."

func _on_body_entered(body):
	if body.name == "Car":
		GlobalPassenger.has_passenger = true
		passenger.queue_free()
