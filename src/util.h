#pragma once

extern "C" {
    int roll_dice_mod(int, int, int);
    int roll_dice_string(const char*);

    int read_test_int();
    int* pointer_to_test_int();
    void set_test_int(int);

    enum Statuses {
        BURN,
        FREEZE,
        ACID,
        POISON,
        DEADLY_POISON,
        BLEED,
    };

    struct Pair{
        int current;
        int max;
    };

    Pair get_pair();
}