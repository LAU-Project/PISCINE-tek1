/*
** EPITECH PROJECT, 2026
** find prime
** File description:
** find prime
*/

#include "day5.h"

int my_find_prime_sup(int nb)
{
    int res = nb;

    while (my_is_prime(res) != TRUE) {
        res++;
    }
    return res;
}
