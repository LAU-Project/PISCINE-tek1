/*
** EPITECH PROJECT, 2026
** show param
** File description:
** show param
*/

#include "day9.h"
#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i]->len != 0; i++) {
        my_putstr(par[i]->copy);
        my_putchar('\n');
        my_put_nbr(par[i]->lenght);
        my_putchar('\n');
        my_show_word_array(par[i]->word_array);
        my_putchar('\n');
    }
    return 0;
}
