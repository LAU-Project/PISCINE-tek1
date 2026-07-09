/*
** EPITECH PROJECT, 2026
** str isnum
** File description:
** str isnum
*/

#include "day6.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!('0' <= str[i] && str[i] <= '9')) {
            return FALSE;
        }
    }
    return TRUE;
}
