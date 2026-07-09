/*
** EPITECH PROJECT, 2026
** str ncat
** File description:
** str ncat
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

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    for (int j = 0; j < my_strlen(src && j < nb); j++) {
        dest[i + j] = src[j];
    }
    dest[i + nb] = '\0';
}
