/*
** EPITECH PROJECT, 2026
** print comb
** File description:
** print comb
*/

#include "day3.h"

static void print_comb(int a, int b, int c)
{
    my_putchar('0' + a);
    my_putchar('0' + b);
    my_putchar('0' + c);
}

static void print_sep(void)
{
    my_putchar(',');
    my_putchar(' ');
}

static void update_comb(int *a, int *b, int *c)
{
    if (*c > 9) {
        *b += 1;
        *c = *b + 1;
        if (*b > 8) {
            *a += 1;
            *b = *a + 1;
            *c = *b + 1;
        }
    }
}

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;

    while (1) {
        print_comb(a, b, c);
        c += 1;
        update_comb(&a, &b, &c);
        if (a >= 8)
            break;
        print_sep();
    }
    return 0;
}
