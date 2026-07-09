/*
** EPITECH PROJECT, 2026
** show meme
** File description:
** show mem
*/

#include "day6.h"
#include <unistd.h>

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

void print_address(int row)
{
    int len = my_len_base(row, HEX_BASE_LOWER);

    if (row == 0) {
        len--;
    }
    for (int i = 0; i < 8 - len - 1; i++) {
        my_putchar('0');
    }
    my_putnbr_base(16 * row, HEX_BASE_LOWER);
    my_putchar(':');
    my_putchar(' ');
}

static void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

void disp_row(int row, char const *str, int size)
{
    int total = 0;
    int i = 0;

    print_address(row);
    for (i = 0; i < 16 && str[i] != '\0'; i++) {
        my_putnbr_base(str[i], HEX_BASE_LOWER);
        if ((i + 1) % 2 == 0) {
            my_putchar(' ');
        }
    }
    for (; i < 16; i++)
        my_putstr("   ");
    for (int j = 0; j < 16 && str[j] != '\0'; j++) {
        if ((32 <= str[j] && str[j] <= 126)) {
            my_putchar(str[j]);
            continue;
        }
        my_putchar('.');
    }
    my_putchar('\n');
}

int my_showmem(char const *str, int size)
{
    int row = 0;
    int nb = size % 16;

    for (int i = 0; i < nb; i++) {
        disp_row(row, &str[i * 15], size);
        row++;
    }
    return 0;
}
