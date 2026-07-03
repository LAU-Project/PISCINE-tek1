/*
** EPITECH PROJECT, 2026
** evil str
** File description:
** evil str
*/

#include "day4.h"

char *my_evil_str(char *str)
{
    int len = my_strlen(str);
    char temp = 0;

    if (!len) {
        return str;
    }
    for (int i = 0; i < (len / 2); i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return &str[0];
}
