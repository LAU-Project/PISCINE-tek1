/*
** EPITECH PROJECT, 2026
** stwa
** File description:
** stwa
*/

#include "day8.h"
#include <stdio.h>

int is_sep(char c)
{
    for (int i = 0; SEP[i] != '\0'; i++) {
        if (c == SEP[i]) {
            return FALSE;
        }
    }
    return TRUE;
}

int count_word(char const *str)
{
    int count = 0;
    int in = FALSE;

    if (!str)
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_sep(str[i]) == FALSE && in == FALSE) {
            count++;
            in = TRUE;
        }
        if (is_sep(str[i]) == TRUE)
            in = FALSE;
    }
    return count;
}

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

char *my_strndup(char const *src, int n)
{
    char *res = malloc(sizeof(char) * (n + 1));

    if (!res) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        res[i] = src[i];
    }
    res[n] = '\0';
    return res;
}

static int skip_sep(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0' && is_sep(str[pos]) == TRUE)
        pos++;
    return pos;
}

static int get_len_word(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0' && is_sep(str[pos]) == FALSE)
        pos++;
    return pos;
}

char **my_str_to_word_array(char const *str)
{
    int len = count_word(str);
    char **tab = malloc(sizeof(char *) * (len + 1));
    int pos = 0;
    int len_word = 0;

    if (!tab || !str)
        return NULL;
    for (int i = 0; i < len; i++) {
        pos += skip_sep(&str[pos]);
        len_word = get_len_word(&str[pos]);
        tab[i] = my_strndup(&str[pos], len_word);
        pos += len_word;
    }
    tab[len] = NULL;
    return tab;
}
