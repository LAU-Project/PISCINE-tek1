/*
** EPITECH PROJECT, 2026
** str islower
** File description:
** str islower
*/

#include "day6.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!('a' <= str[i] && str[i] <= 'z')) {
            return FALSE;
        }
    }
    return TRUE;
}
