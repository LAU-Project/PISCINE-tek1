/*
** EPITECH PROJECT, 2026
** strcapitalize
** File description:
** strcapitalize
*/

#include "day6.h"

static int my_isalpha(char c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

static int my_isdigit(char c)
{
    return ('0' <= c && c <= '9');
}

char *my_strcapitalize(char *str)
{
    int start = TRUE;

    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (0 < i && my_isdigit(str[i - 1]) == TRUE) {
            start = FALSE;
        }
        if (my_isalpha(str[i]) == TRUE && start == TRUE) {
            start = FALSE;
            str[i] = str[i] - OFFSET;
        }
        if (my_isalpha(str[i]) == FALSE) {
            start = TRUE;
        }
    }
    return str;
}
