/*
** EPITECH PROJECT, 2026
** compute power
** File description:
** compute power
*/

#include "day5.h"

int my_compute_power_it(int nb, int p)
{
    int res = 1;

    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    for (int i = 0; i < p; i++) {
        res *= nb;
    }
    return res;
}
