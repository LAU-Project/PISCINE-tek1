/*
** EPITECH PROJECT, 2026
** getnbr base
** File description:
** getnbr
*/
#include "day6.h"

static int get_char_pos(char c, char const *base)
{
    for (int i = 0; base[i] != '\0'; i++) {
        if (base[i] == c) {
            return i;
        }
    }
    return NOT_FOUND;
}

static int my_isdigit(char c, char const *base)
{
    return get_char_pos(c, base) != NOT_FOUND;
}

static int get_pos(char const *str, char const *base)
{
    int pos = 0;

    while (str[pos] != '\0') {
        if (my_isdigit(str[pos], base)) {
            return pos;
        }
        pos++;
    }
    return NOT_FOUND;
}

static int get_nb_len(char const *str, char const *base)
{
    int i = 0;
    int nb_len = 0;

    while (str[i] != '\0') {
        if (my_isdigit(str[i], base) == FALSE) {
            break;
        }
        nb_len++;
        i++;
    }
    return nb_len;
}

static int get_signe(char const *str, int pos)
{
    int neg = 0;

    for (int i = 0; i < pos; i++) {
        if (str[i] == '-') {
            neg = !neg;
        }
    }
    if (neg) {
        return -1;
    }
    return 1;
}

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

long my_powern(int n, int len)
{
    long nb = 1;

    for (int i = 0; i < n; i++) {
        nb *= len;
    }
    return nb;
}

int fill_nb(int signe, int nb_len, char const *str, char const *base)
{
    long nb = 0;
    int len = my_strlen(base);
    int digit;

    for (int i = 0; i < nb_len; i++) {
        digit = get_char_pos(str[nb_len - 1 - i], base);
        nb += my_powern(i, len) * digit;
        if (nb > (long)MAX_INT + 1) {
            return ERROR;
        }
    }
    nb *= signe;
    if (nb > MAX_INT || nb < MIN_INT) {
        return ERROR;
    }
    return (int)nb;
}

int my_getnbr_base(char const *str, char const *base)
{
    int len = my_strlen(str);
    int pos = NOT_FOUND;
    int nb_len = 0;
    int signe = 0;

    if (!len) {
        return ERROR;
    }
    pos = get_pos(str, base);
    if (pos == NOT_FOUND) {
        return ERROR;
    }
    nb_len = get_nb_len(&str[pos], base);
    if (nb_len == 0) {
        return ERROR;
    }
    signe = get_signe(str, pos);
    return fill_nb(signe, nb_len, &str[pos], base);
}
