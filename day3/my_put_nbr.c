/*
** EPITECH PROJECT, 2026
** put nbr
** File description:
** put nbr
*/

#include "day3.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    if (nb < 10) {
        my_putchar('0' + nb);
        return 0;
    }
    return my_put_nbr(nb / 10) + my_put_nbr(nb % 10);
}
