#pragma once

extern "C" {
    int roll_dice_mod(int, int, int);
    int roll_dice_string(const char*);

    struct Pair{
        int current;
        int max;
    };

    Pair get_pair();
}