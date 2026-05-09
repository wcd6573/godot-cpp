#pragma once

extern "C" {
    int roll_dice_mod(int, int, int);

    struct Pair{
        int current;
        int max;
    };

    Pair get_pair();
}