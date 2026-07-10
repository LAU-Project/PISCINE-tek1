/*
** EPITECH PROJECT, 2026
** strstr
** File description:
** strstr
*/

#include "day6.h"

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int cmp(char *str, char const *to_find, int len)
{
    for (int i = 0; i < len; i++) {
        if (str[i] != to_find[i]) {
            return FALSE;
        }
    }
    return TRUE;
}

char *my_strstr(char *str, char const *to_find)
{
    int pos = NOT_FOUND;
    int len_tofind = my_strlen(to_find);
    int len = my_strlen(str);

    for (int i = 0; i + len_tofind < len; i++) {
        if (cmp(&str[i], to_find, len_tofind) == TRUE) {
            pos = i;
            break;
        }
    }
    if (pos != NOT_FOUND) {
        return &str[pos];
    }
    return NULL;
}
