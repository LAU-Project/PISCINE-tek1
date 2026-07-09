/*
** EPITECH PROJECT, 2026
** strlen
** File description:
** strlen
*/

#include "day4.h"

int my_strlen(char const *str)
{
    int len = 0;

    if (!str) {
        return 0;
    }
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
