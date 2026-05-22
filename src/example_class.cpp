#include "example_class.h"


void ExampleClass::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
	godot::ClassDB::bind_method(D_METHOD("roll_dice", "count", "size", "mod"), &ExampleClass::roll_dice);
	godot::ClassDB::bind_method(D_METHOD("print_int_pair"), &ExampleClass::print_int_pair);
	godot::ClassDB::bind_method(D_METHOD("set_global_test_int_pointer"), &ExampleClass::set_global_test_int_pointer);
	godot::ClassDB::bind_method(D_METHOD("read_global_test_int"), &ExampleClass::read_global_test_int);
	godot::ClassDB::bind_method(D_METHOD("set_global_test_int", "v"), &ExampleClass::set_global_test_int);	
	godot::ClassDB::bind_method(D_METHOD("read_pointer"), &ExampleClass::read_pointer);
	godot::ClassDB::bind_method(D_METHOD("set_pointer", "v"), &ExampleClass::set_pointer);	
}

void ExampleClass::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}

int ExampleClass::roll_dice(int count, int size, int mod){
	return roll_dice_string("2d6+4");
}

void ExampleClass::print_int_pair() {
	Pair p = get_pair();
	print_line(vformat("Current: %d, Max: %d", p.current, p.max));
}

void ExampleClass::read_global_test_int() {
	print_line(vformat("Global Test int:%d", read_test_int()));
}

void ExampleClass::set_global_test_int(int v) {
	set_test_int(v);
}

void ExampleClass::set_global_test_int_pointer() {
	global_test_int = pointer_to_test_int();
}

void ExampleClass::read_pointer() {
	print_line(vformat("Int from pointer: %d", *global_test_int));
}

void ExampleClass::set_pointer(int v) {
	*global_test_int = v;
}
