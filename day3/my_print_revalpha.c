/*
** EPITECH PROJECT, 2026
** print revalpha
** File description:
** print revalpha
*/

#include "day3.h"

int my_print_revalpha(void)
{
    for (int i = 0; i < NB_LETTERS; i++) {
        my_putchar('z' - i);
    }
    return 0;
}
