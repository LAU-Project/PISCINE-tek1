/*
** EPITECH PROJECT, 2026
** strdup
** File description:
** strduo
*/

#include "day8.h"

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *res = malloc(sizeof(char) * (len + 1));

    if (!res) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        res[i] = src[i];
    }
    res[len] = '\0';
    return res;
}
