/*
** EPITECH PROJECT, 2026
** strupcase
** File description:
** strupcase
*/

#include "day6.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] = str[i] - OFFSET;
        }
    }
    return str;
}
