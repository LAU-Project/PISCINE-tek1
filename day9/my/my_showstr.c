/*
** EPITECH PROJECT, 2026
** show str
** File description:
** show str
*/

#include "day6.h"

static void dont_print(char c)
{
    my_putchar('\\');
    my_putnbr_base(c, HEX_BASE_LOWER);
}

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(32 <= str[i] && str[i] <= 126)) {
            dont_print(str[i]);
            continue;
        }
        my_putchar(str[i]);
    }
    return 0;
}
