extends Node


func _ready() -> void:
	var example := ExampleClass.new()
	example.print_type(example)
	print(example.roll_dice(2, 6, 4))
