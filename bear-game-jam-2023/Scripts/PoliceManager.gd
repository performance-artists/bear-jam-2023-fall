extends Node3D

var level = 1
var police_limit = 1
var current_police_total = 0

var cooldown = 0
func _process(delta):
	cooldown += delta
	if cooldown > 30:
		cooldown = 0
		level += 1
	var sum = 0
	for i in range(level):
		sum += i
	police_limit = 1 + sum
