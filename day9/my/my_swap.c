/*
** EPITECH PROJECT, 2026
** my swap
** File description:
** my swap
*/

#include "day4.h"

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
