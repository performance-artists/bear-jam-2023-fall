extends StaticBody3D

@onready var audio_stream_player = $AudioStreamPlayer

const arr = ['A', 'B', 'C', 'D', 'E', 'F', 'H']
var path = "res://Assets/CarsAndCity/building_%s.fbx"
var cube = preload("res://Player/cube.tscn")
var crash_sfx_player = preload("res://Scenes/CrashSfxPlayer.tscn")
var destroyed = false
var building_index = 'A'
var building_obj
var building_fbx

func _ready():
	building_index = arr.pick_random()
	var building_path = path % building_index
	building_fbx = load(building_path)
	building_obj = building_fbx.instantiate()
	add_child(building_obj)

func collapse():
	var size = get_building_size()
	building_obj.queue_free()
	#crash_sfx_player.instantiate()
	spawn_cube(size, building_obj.position)

func get_building_size():
	var obj_name = "building_" + building_index
	var root_node = building_obj.get_node("RootNode")
	var mesh = root_node.get_node(obj_name)
	var size = mesh.get_aabb().size * 100
	return size

func spawn_cube(dimension, obj_position):
	const CUBE_SIZE = Vector3(0.2, 0.2, 0.2)
	for x in range(dimension.x * 5):
		for y in range(dimension.y, dimension.y * 4):
			for z in range(dimension.z * 5):
				var cube_instance = cube.instantiate()
				cube_instance.position = Vector3(x, y, z) * CUBE_SIZE
				cube_instance.position.z -= 1
				add_child(cube_instance)
func _on_area_3d_body_entered(body):
	if body.name == "Car" and not destroyed and body.get_skill_status():
		destroyed = true
		$CollisionShape3D.queue_free()
		collapse()
		audio_stream_player.play()
		GlobalXP.value += 5
		GlobalHealth.value -= 2
