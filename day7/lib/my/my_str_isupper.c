/*
** EPITECH PROJECT, 2026
** str islower
** File description:
** str islower
*/

#include "day6.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!('A' <= str[i] && str[i] <= 'Z')) {
            return FALSE;
        }
    }
    return TRUE;
}
