extends Node


func _ready() -> void:
	print("Hello")
	var example = ExampleClass.new();
	example.set_global_test_int_pointer();
	example.read_global_test_int();
	example.set_pointer(10);
	example.read_global_test_int();
