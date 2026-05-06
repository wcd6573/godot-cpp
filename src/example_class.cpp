#include "example_class.h"

void ExampleClass::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
	//godot::ClassDB::bind_method(D_METHOD("roll_dice", "dice"), &ExampleClass::roll_dice);
}

void ExampleClass::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}

int ExampleClass::roll_dice(std::string dice){
	return roll_dice_string(dice);
}
