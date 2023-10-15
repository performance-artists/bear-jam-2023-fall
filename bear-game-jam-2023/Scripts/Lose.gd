extends Panel

@onready var points = $Points
@onready var xp = $"../XP"
@onready var timer = $"../Timer"
@onready var health = $"../Health"

@export var taxi_theme_player: AudioStreamPlayer
@export var game_over_player: AudioStreamPlayer

var show_it = true
var has_played_game_over_theme = false

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	if GlobalTimer.value < 0 or GlobalHealth.value <= 0:
		if show_it:
			points.text = "POINTS =  " + str(GlobalXP.value)
			show_it = false
		xp.hide()
		timer.hide()
		health.hide()
		self.show()
		GlobalHealth.value = 0
		GlobalXP.value = 0
		taxi_theme_player.stop()
		if !has_played_game_over_theme:
			game_over_player.play()
			has_played_game_over_theme = true
	else:
		show_it = true
		self.hide()
		xp.show()
		timer.show()
		health.show()
