extends Panel

@onready var word = $Word

var cooldown = 0

var dialogues = [
	"Time to break the rules and start my own business, my way.",
	"Survival in this industry means partnering with villains.",
	"Desperate times call for dirty hands and tax evasion.",
	"Embracing the dark side to secure my financial future.",
	"In this corporate battlefield, allies are found among villains.",
	"Seeing potential in society's labeled devils for profit.",
	"Collaborating underground with money-savvy villains.",
	"Money makes the world turn; I'll rub shoulders with shady characters.",
	"Success requires compromising with the underworld.",
	"Venturing into the dark side to unleash my potential."
]

func _ready():
	word.text = dialogues[randi() % dialogues.size()]
	self.show()

func _process(delta):
	cooldown += delta
	if cooldown > 5:
		self.hide()
