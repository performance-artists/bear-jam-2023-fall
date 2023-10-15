extends Panel

@onready var word = $Word
@onready var driver_dialogue = $"../DriverDialogue"
@onready var audio_stream_player = $"../AudioStreamPlayer"

var cooldown = 0

var dialogues = [
	"Drive  fast.  I  don't  wanna  get  caught.",
	"I'm  the  most  important  man  in  this  city,  so  drive  nicely.",
	"Drive.  Don't  talk.",
	"Drive  fast,  no  time  to  waste.",
	"Time  is  precious,  let's  beat  the  clock.",
	"Scenic  route,  show  me  the  beauty.",
	"Respect  my  presence,  handle  with  care.",
	"Impress  me,  drive  with  style.",
	"Let's  scape  through  driving,  we  will  feel  the  freedom.",
	"Vroom  vroom!"
]

func _process(delta):
	if GlobalPassenger.has_passenger == true:
		if cooldown == 0:
			audio_stream_player.play()
			driver_dialogue.hide()
			word.text = dialogues[randi() % dialogues.size()]
			self.show()
		elif cooldown >= 5:
			self.hide()
		cooldown += delta
	else:
		cooldown = 0
