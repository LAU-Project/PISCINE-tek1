/*
** EPITECH PROJECT, 2026
** isneg
** File description:
** isneg
*/

#include "day3.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
