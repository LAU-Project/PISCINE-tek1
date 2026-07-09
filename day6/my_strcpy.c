/*
** EPITECH PROJECT, 2026
** strcpy
** File description:
** strcpy
*/

#include "day6.h"

char *my_strcpy(char *dest, char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return dest;
}
