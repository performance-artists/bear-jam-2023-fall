extends Panel

@onready var word = null

var cooldown = 0

var dialogues = [
	"Drive fast. I don't wanna get caught.",
	"I'm the most important man in this city, so drive nicely.",
	"Drive. Don't talk.",
	"Drive fast, no time to waste.",
	"Time is precious, let's beat the clock.",
	"Scenic route, show me the beauty.",
	"Respect my presence, handle with care.",
	"Impress me, drive with style.",
	"Let's scape through driving, we will feel the freedom.",
	"Vroom vroom!"
]

func _ready():
	word.text = dialogues[randi() % dialogues.size()]
	self.show()

func _process(delta):
	cooldown += delta
	if cooldown > 5:
		self.hide()
