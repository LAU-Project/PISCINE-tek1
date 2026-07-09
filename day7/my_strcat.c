/*
** EPITECH PROJECT, 2026
** str cat
** File description:
** str cat
*/

#include "my.h"

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    for (int j = 0; j < my_strlen(src); j++) {
        dest[i + j] = src[j];
    }
    dest[i + my_strlen(src)] = '\0';
}
