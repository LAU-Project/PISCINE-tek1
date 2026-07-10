/*
** EPITECH PROJECT, 2026
** compute squareroot
** File description:
** compute squareroot
*/

#include "day5.h"

int my_compute_square_root(int nb)
{
    int mid = (nb / 2) + 1;

    if (nb == 1) {
        return 1;
    }
    for (int i = 0; i < mid; i++) {
        if (i * i == nb) {
            return i;
        }
    }
    return 0;
}
