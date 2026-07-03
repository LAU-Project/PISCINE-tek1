/*
** EPITECH PROJECT, 2026
** print alpha
** File description:
** print alpha
*/

#include "day3.h"

int my_print_alpha(void)
{
    for (int i = 0; i < NB_LETTERS; i++) {
        my_putchar('a' + i);
    }
    return 0;
}
