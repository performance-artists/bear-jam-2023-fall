extends Area3D

const move_speed = 5

func _ready():
	pass

func _process(delta):
	position = position + Vector3(0,0,move_speed)


func _on_body_entered(body):
	if body.name == "Car":
		queue_free()
