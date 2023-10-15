extends NavigationRegion3D


# Called after the map is generated or building is destroy.
func _bake():
	var nav_region = $NavigationRegion
	nav_region.bake()
