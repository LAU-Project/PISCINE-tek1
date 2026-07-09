/*
** EPITECH PROJECT, 2026
** putnbr base
** File description:
** putnbr
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

int my_putnbr_base(int nbr, char const *base)
{
    int len = my_strlen(base);

    if (nbr < 0) {
        my_putchar('-');
        my_putnbr_base(nbr * (-1), base);
    }
    if (nbr < len) {
        my_putchar(base[nbr]);
        return 0;
    }
    return my_putnbr_base(nbr / len, base) + my_putnbr_base(nbr % len, base);
}
