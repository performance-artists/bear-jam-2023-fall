extends Panel

var cooldown = 0

func _process(delta):
	cooldown += delta
	if cooldown > 5:
		self.hide()
