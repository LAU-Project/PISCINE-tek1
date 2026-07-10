/*
** EPITECH PROJECT, 2026
** strlowcase
** File description:
** strlowcase
*/

#include "day6.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] = str[i] + OFFSET;
        }
    }
    return str;
}
