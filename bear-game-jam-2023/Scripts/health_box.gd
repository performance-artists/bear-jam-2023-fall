extends Area3D

func _on_body_entered(body):
	print(body)
	if GlobalHealth.value <= 80:
		GlobalHealth.value += 20
	else:
		GlobalHealth.value = 100
	hide()
	await get_tree().create_timer(10.0).timeout
	show()
