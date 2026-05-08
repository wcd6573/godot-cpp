#include "example_class.h"

extern "C"{
	#include "util.h"
}


void ExampleClass::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
	godot::ClassDB::bind_method(D_METHOD("roll_dice", "count", "size", "mod"), &ExampleClass::roll_dice);
}

void ExampleClass::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}

int ExampleClass::roll_dice(int count, int size, int mod){
	return roll_dice_mod(count, size, mod);
}
