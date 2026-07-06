/*
** EPITECH PROJECT, 2026
** compute factorial
** File description:
** compute factorial
*/

#include "day5.h"

int my_compute_factorial_it(int nb)
{
    int res = 1;

    if (nb < 0) {
        return ERR;
    }
    for (int i = 1; i < nb + 1; i++) {
        res = res * i;
    }
    return res;
}
