extends Node3D

@onready var passenger = $"../../Passenger"
@onready var destination = $"../../Destination"

func _physics_process(delta):
	if GlobalPassenger.has_passenger:
		look_at(destination.position,Vector3.UP)
	else:
		look_at(passenger.position,Vector3.UP)
