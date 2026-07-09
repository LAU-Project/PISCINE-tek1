/*
** EPITECH PROJECT, 2026
** show word
** File description:
** show word
*/

#include "day8.h"
#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static int my_putstr(char const *str)
{
    if (!str) {
        return 84;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
    }
    return 0;
}
