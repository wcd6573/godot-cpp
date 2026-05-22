#pragma once

#include "godot_cpp/classes/ref_counted.hpp"
#include "godot_cpp/classes/wrapped.hpp"
#include "godot_cpp/variant/variant.hpp"

extern "C"{
	#include "util.h"
}

using namespace godot;

/*
extern "C" {
	int roll_dice_string(const char*);
}
*/

class ExampleClass : public RefCounted {
	GDCLASS(ExampleClass, RefCounted)

protected:
	static void _bind_methods();

public:
	ExampleClass() = default;
	~ExampleClass() override = default;

	void print_type(const Variant &p_variant) const;
	int roll_dice(int count, int size, int mod);
	
	void print_int_pair();

	void set_global_test_int_pointer();
	void read_global_test_int();
	void set_global_test_int(int v);
	void read_pointer();
	void set_pointer(int v);
	
	int* global_test_int;
};
