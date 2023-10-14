extends Panel

@onready var points = $Points
@onready var xp = $"../XP"
@onready var timer = $"../Timer"

var show_it = true

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	if GlobalTimer.value < 0:
		if show_it:
			points.text = "POINTS =  " + str(GlobalXP.value)
			show_it = false
		xp.hide()
		timer.hide()
		self.show()
		GlobalXP.value = 0
	else:
		show_it = true
		self.hide()
		xp.show()
		timer.show()
