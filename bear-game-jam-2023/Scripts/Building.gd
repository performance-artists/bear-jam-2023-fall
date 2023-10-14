extends Node3D

const arr = ['A', 'B', 'C', 'D', 'E', 'F', 'H']
var path = "res://Assets/CarsAndCity/building_%s.fbx"
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
	var obj_name = "building_" + building_index
	var root_node = building_obj.get_node("RootNode")
	var mesh = root_node.get_node(obj_name)
	var size = mesh.get_aabb().size * 100
	building_obj.queue_free()
	spawn_cube(size, building_obj.position)

func spawn_cube(obj_size, obj_position):
	var cube = MeshInstance3D.new()
	var cube_mesh = BoxMesh.new()
	cube.mesh = cube_mesh
	var cube_size = cube_mesh.get_aabb().size
	cube.scale.x = obj_size.x / cube_size.x
	cube.scale.y = obj_size.y / cube_size.y
	cube.scale.y = obj_size.z / cube_size.z
	cube.position.y += 1
	add_child(cube)

func _input(event):
	if event.is_action_pressed("ui_accept"):
		collapse()
