extends NavigationRegion3D


# Called after the map is generated or building is destroy.
func _ready():
	self.bake_navigation_mesh()
