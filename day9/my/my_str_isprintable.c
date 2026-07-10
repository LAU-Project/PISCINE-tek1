/*
** EPITECH PROJECT, 2026
** str isalpha
** File description:
** str isalpha
*/

#include "day6.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(33 <= str[i] && str[i] <= 126)) {
            return FALSE;
        }
    }
    return TRUE;
}
