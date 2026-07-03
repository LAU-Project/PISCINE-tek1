/*
** EPITECH PROJECT, 2026
** print digits
** File description:
** print digits
*/

#include "day3.h"

int my_print_digits(void)
{
    for (int i = 0; i < MAX_DIGITS; i++) {
        my_putchar('0' + i);
    }
    return 0;
}
