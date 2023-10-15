extends Node3D

func _physics_process(delta):
	if GlobalPassenger.has_passenger:
		var node = find_node_by_name(get_tree().get_root(), "Destination")
		if(node):
			look_at(node.position,Vector3.UP)
	else:
		var node = find_node_by_name(get_tree().get_root(), "Passenger")
		if(node):
			look_at(node.position,Vector3.UP)

func find_node_by_name(root, name):

	if(root.get_name() == name):
		return root

	for child in root.get_children():
		if(child.get_name() == name):
			return child

		var found = find_node_by_name(child, name)

		if(found):
			return found

	return null
