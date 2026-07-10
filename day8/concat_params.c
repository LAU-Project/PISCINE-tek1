/*
** EPITECH PROJECT, 2026
** concat params
** File description:
** concat params
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

int copy_arg(char *res, int pos, char *src)
{
    int len = my_strlen(src);

    for (int i = 0; i < len; i++) {
        res[pos + i] = src[i];
    }
    return len;
}

char *concat_params(int argc, char **argv)
{
    int len = 0;
    char *res = NULL;
    int pos = 0;

    for (int i = 0; i < argc; i++) {
        len += my_strlen(argv[i]);
    }
    len += argc - 1;
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;
    for (int i = 0; i < argc; i++) {
        pos += copy_arg(res, pos, argv[i]);
        if (i < argc - 1) {
            pos += copy_arg(res, pos, "\n");
        }
    }
    res[pos] = '\0';
    return res;
}
