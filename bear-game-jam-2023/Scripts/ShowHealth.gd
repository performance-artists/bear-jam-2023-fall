extends ProgressBar

func _process(delta):
	self.value = GlobalHealth.value
