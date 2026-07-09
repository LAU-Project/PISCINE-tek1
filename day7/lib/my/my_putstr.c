/*
** EPITECH PROJECT, 2026
** putstr
** File description:
** putstr
*/

#include "day4.h"

int my_putstr(char const *str)
{
    if (!str) {
        return 84;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
