/*
** EPITECH PROJECT, 2026
** print comb
** File description:
** print comb
*/

#include "day3.h"

static void print_comb(int a, int b, int c, int d)
{
    my_putchar('0' + a);
    my_putchar('0' + b);
    my_putchar(' ');
    my_putchar('0' + c);
    my_putchar('0' + d);
}

static void print_sep(void)
{
    my_putchar(',');
    my_putchar(' ');
}

static void print_right(void)
{
    int c = 0;
    int d = 1;

    while (1) {
        print_comb(0, 0, c, d);
        d += 1;
        if (d == 10) {
            d = 0;
            c += 1;
        }
        print_sep();
        if (c == 10) {
            break;
        }
    }
}

static void print_left(void)
{
    int a = 0;
    int b = 0;

    while (1) {
        print_comb(a, b, 9, 9);
        b += 1;
        if (b == 10) {
            b = 0;
            a += 1;
        }
        if (a == 10) {
            break;
        }
        print_sep();
    }
}

int my_print_comb2(void)
{
    print_right();
    print_left();
    return 0;
}
