#pragma once

#include "godot_cpp/classes/ref_counted.hpp"
#include "godot_cpp/classes/wrapped.hpp"
#include "godot_cpp/variant/variant.hpp"
#include <string.h>

using namespace godot;

extern "C" {
	int roll_dice_string(std::string);
}

class ExampleClass : public RefCounted {
	GDCLASS(ExampleClass, RefCounted)

protected:
	static void _bind_methods();

public:
	ExampleClass() = default;
	~ExampleClass() override = default;

	void print_type(const Variant &p_variant) const;
	int roll_dice(std::string);
};
