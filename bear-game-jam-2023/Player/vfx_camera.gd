extends Camera3D

@onready var anim = $AnimationPlayer

# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.

var iskeypressed = false
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _input(event):
	if Input.is_key_label_pressed(KEY_SPACE) and not iskeypressed:
		iskeypressed = true
		anim.play("SpeedLine")
		await get_tree().create_timer(3.0).timeout
		anim.play("Decay_SpeedLine")
		iskeypressed = false
	pass
