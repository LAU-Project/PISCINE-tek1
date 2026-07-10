/*
** EPITECH PROJECT, 2026
** strcmp
** File description:
** strcmp
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

int my_strcmp(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    for (int i = 0; i < len1 && i < len2; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    return len1 - len2;
}
