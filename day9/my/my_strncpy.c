/*
** EPITECH PROJECT, 2026
** strncpy
** File description:
** strncpy
*/

#include "day6.h"

char *my_strncpy(char *dest, char const *str, int n)
{
    int i = 0;

    for (i = 0; i < n; i++) {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return dest;
}
