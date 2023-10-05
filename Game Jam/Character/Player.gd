extends CharacterBody2D

const SPEED = 100.0
var direction = "Down"

@onready var anim = get_node("AnimationPlayer")

func _physics_process(delta):

	var horizontal = Input.get_axis("ui_left", "ui_right")
	var vertical = Input.get_axis("ui_up", "ui_down")
	
	if horizontal == 1:
		direction = "Right"
	if horizontal == -1:
		direction = "Left"
	if vertical == 1:
		direction = "Down"
	if vertical == -1:
		direction = "Up"
	
	velocity.x = horizontal * SPEED
	velocity.y = vertical * SPEED
	
	if horizontal == 0 and vertical == 0:
		if direction == "Right":
			anim.play("IdleRight")
		if direction == "Left":
			anim.play("IdleLeft")
		if direction == "Down":
			anim.play("IdleDown")
		if direction == "Up":
			anim.play("IdleUp")
	else:
		if direction == "Right":
			anim.play("WalkRight")
		if direction == "Left":
			anim.play("WalkLeft")
		if direction == "Down":
			anim.play("WalkDown")
		if direction == "Up":
			anim.play("WalkUp")
	
	move_and_slide()
