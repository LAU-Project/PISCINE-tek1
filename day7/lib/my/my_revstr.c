/*
** EPITECH PROJECT, 2026
** revstr
** File description:
** revstr
*/

#include "day6.h"

static int my_strlen(char *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}
