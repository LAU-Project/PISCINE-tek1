/*
** EPITECH PROJECT, 2026
** my getnbr
** File description:
** my getnbr
*/

#include "day4.h"

static int my_isdigit(char c)
{
    if ('0' <= c && c <= '9') {
        return TRUE;
    }
    return FALSE;
}

static int get_pos(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0') {
        if (my_isdigit(str[pos])) {
            return pos;
        }
        pos++;
    }
    return NOT_FOUND;
}

static int get_nb_len(char const *str)
{
    int i = 0;
    int nb_len = 0;

    while (str[i] != '\0') {
        if (my_isdigit(str[i]) == FALSE) {
            break;
        }
        nb_len++;
        i++;
    }
    return nb_len;
}

static int get_signe(char const *str)
{
    int pos = 0;
    int neg = 0;
    int signe = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            neg++;
        }
        if (str[i] == '+') {
            pos++;
        }
    }
    if (!neg && !pos)
        return 1;
    if (neg >= pos) {
        return -1;
    }
    return 1;
}

static int my_power10(int n)
{
    int nb = 1;

    for (int i = 0; i < n; i++) {
        nb *= 10;
    }
    return nb;
}

int fill_nb(int signe, int nb_len, char const *str)
{
    long nb = 0;

    for (int i = 0; i < nb_len; i++) {
        nb += (my_power10(i) * (str[nb_len - 1 - i] - '0'));
    }
    if (nb > MAX_INT && MIN_INT < (nb * signe)) {
        return ERROR;
    }
    nb *= signe;
    return (int)nb;
}

int my_getnbr(char const *str)
{
    int len = my_strlen(str);
    int pos = NOT_FOUND;
    int nb_len = 0;
    int signe = 0;

    if (!len) {
        return ERROR;
    }
    pos = get_pos(str);
    if (pos == NOT_FOUND)
        return ERROR;
    nb_len = get_nb_len(&str[pos]);
    if (nb_len == NOT_FOUND || nb_len > 10) {
        return ERROR;
    }
    signe = get_signe(str);
    return fill_nb(signe, nb_len, &str[pos]);
}
