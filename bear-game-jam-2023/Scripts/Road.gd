extends Node3D

@export var map_width = 200
@export var map_height = 200
var road_counter = 0

var fbx_base = preload("res://Assets/CarsAndCity/base.fbx")
var fbx_road = preload("res://Assets/CarsAndCity/road_straight.fbx")
var fbx_road_junction = preload("res://Assets/CarsAndCity/road_junction.fbx")

var node_building = preload("res://Player/Building.tscn")


func bfs(width: int, height: int, r):
	var q = []
	q.push_back(Vector2(width / 2, height / 2))

	while q.size() > 0:
		var top = q[0]
		q.pop_front()
		var x = top.x
		var y = top.y
		if road_counter > 1200:
			return
		if x < 0 or x >= width or y < 0 or y >= height:
			continue
		var dir = randi() % 4 + 1
		for i in range(dir):
			var move_dir = randi() % 4
			var len = 20 + randi() % 120
			road_counter += 1
			if move_dir == 0:
				for j in range(len):
					if x + j < width:
						r[y][x + j] = 1
				q.push_back(Vector2(x + len, y))
			elif move_dir == 1:
				for j in range(len):
					if x - j >= 0:
						r[y][x - j] = 1
				q.push_back(Vector2(x - len, y))
			elif move_dir == 2:
				for j in range(len):
					if y - j >= 0:
						r[y - j][x] = 1
				q.push_back(Vector2(x, y - len))
			elif move_dir == 3:
				for j in range(len):
					if y + j < height:
						r[y + j][x] = 1
				q.push_back(Vector2(x, y + len))
			else:
				print("error")
				return

# Called when the node enters the scene tree for the first time.
func _ready():
	var size = 4
	var r = []
	var offset = Vector3(map_width, 0, map_height) * size / 2
	for i in range(map_height):
		var t = []
		t.resize(map_width)
		t.fill(0)
		r.append(t)
	bfs(map_width,map_height,r)
	for i in range(1,len(r) - 1):
		for j in range(1,len(r[i]) - 1):
			if r[i][j] == 0:
				var base = fbx_base.instantiate()
				base.position = Vector3(i * size, 0, j * size) - offset
				var chance = randi_range(0,5)
				if chance == 0:
					var building = node_building.instantiate()
					building.position = Vector3(i * size, 0, j * size) - offset
					add_child(building)
					building.scale = Vector3(2,2,2)
				base.scale = Vector3(2,2,2)
				add_child(base)
			else:
				var count = r[i-1][j] + r[i+1][j] + r[i][j-1] + r[i][j+1]
				var road
				if count > 2:
					road = fbx_road_junction.instantiate()
				elif r[i-1][j] + r[i+1][j] > 0:
					road = fbx_road.instantiate()
					road.rotation.y = PI / 2
				else:
					road = fbx_road.instantiate()
				road.position = Vector3(i * size, 0, j * size) - offset
				road.scale = Vector3(2,2,2)
				add_child(road)
	var nav_region = get_node("/root/World/NavigationRegion3D")
	var nav_region_script = nav_region.get_script()
	nav_region_script._bake()

func _process(delta):
	pass
