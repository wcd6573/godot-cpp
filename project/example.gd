extends Node


func _ready() -> void:
	var example := ExampleClass.new()
	example.print_type(example)
	print(example.roll_dice(1, 6, -1))
