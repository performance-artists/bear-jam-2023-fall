extends AudioStreamPlayer

@export var crash_sfx_1: AudioStream
@export var crash_sfx_2: AudioStream
@export var crash_sfx_3: AudioStream
@export var crash_sfx_4: AudioStream

# Called when the node enters the scene tree for the first time.
func _ready():
	randomize()
	var rand = randi() % 4
	match(rand):
		0:
			stream = crash_sfx_1
		1:
			stream = crash_sfx_2
		2:
			stream = crash_sfx_3
		3:
			stream = crash_sfx_4
	play()


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	if not playing:
		queue_free()
