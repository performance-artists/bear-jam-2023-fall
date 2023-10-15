extends RigidBody3D

const move_speed = 1
const del_time = 10
var temp_time = 0

func _ready():
	temp_time = del_time
