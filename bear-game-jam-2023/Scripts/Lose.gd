extends Panel

@onready var points = $Points
@onready var xp = $"../XP"
@onready var timer = $"../Timer"

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	if GlobalTimer.value < 0:
		points.text = "POINTS =  " + str(GlobalXP.value)
		xp.hide()
		timer.hide()
		self.show()
	else:
		self.hide()
		xp.show()
		timer.show()
