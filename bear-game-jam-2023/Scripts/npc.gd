extends Area3D

const move_speed = 1
const del_time = 10
var temp_time = 0

func _ready():
	temp_time = del_time

func _process(delta):
	position = position + Vector3(0,0,move_speed * delta)
	if temp_time <= 0:
		queue_free()
		temp_time = del_time
	temp_time -= delta

func _on_body_entered(body):
	if body.name == "Car":
		queue_free()
