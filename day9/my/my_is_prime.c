/*
** EPITECH PROJECT, 2026
** is prime
** File description:
** is prime
*/

#include "day5.h"

int my_is_prime(int nb)
{
    if (nb < 2) {
        return FALSE;
    }
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
