/*
** EPITECH PROJECT, 2026
** convert base
** File description:
** convert base
*/

#include "day8.h"

int power(int nb, int p)
{
    int res = 1;

    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    for (int i = 0; i < p; i++) {
        res *= nb;
    }
    return res;
}

int get_pos(char c, char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[i]) {
            return i;
        }
    }
    return ERROR;
}

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int my_len_base(int nbr, char const *base)
{
    int len = my_strlen(base);

    if (nbr < 0) {
        return 1 + my_len_base(nbr * (-1), base);
    }
    if (nbr < len) {
        return 1;
    }
    return my_len_base(nbr / len, base) + my_len_base(nbr % len, base);
}

int fill_buf(int nb, char const *base, char *res, int *i)
{
    int len = my_strlen(base);

    if (nb < 0) {
        res[*i] = '-';
        (*i)++;
        return fill_buf(nb * (-1), base, res, i);
    }
    if (nb < len) {
        res[*i] = base[nb];
        (*i)++;
        return 0;
    }
    return fill_buf(nb / len, base, res, i) + fill_buf(nb % len, base, res, i);
}

static char *create_convert(int len, int nb, char const *base)
{
    char *res = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (!res) {
        return NULL;
    }
    fill_buf(nb, base, res, &i);
    res[len] = '\0';
    return res;
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int sum = 0;
    int i = 0;
    int len = my_strlen(nbr);
    int base = my_strlen(base_from);
    int res_len = 0;

    if (base_from[0] == '\0' || base_to[0] == '\0') {
        return NULL;
    }
    for (int j = 0; nbr[j] != '\0'; j++) {
        i = get_pos(nbr[j], base_from);
        sum += power(base, len - j - 1) * i;
    }
    res_len = my_len_base(sum, base_to);
    return create_convert(res_len, sum, base_to);
}
