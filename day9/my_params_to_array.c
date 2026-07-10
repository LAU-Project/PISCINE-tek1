/*
** EPITECH PROJECT, 2026
** params array
** File description:
** params array
*/

#include <stdlib.h>
#include "day9.h"
#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *arr = malloc(sizeof(struct info_param) * (ac + 1));
    int i;

    if (!arr)
        return NULL;
    for (i = 0; i < ac; i++) {
        arr[i].length = my_strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = malloc(sizeof(char) * (arr[i].length + 1));
        if (!arr[i].copy)
            return NULL;
        my_strcpy(arr[i].copy, av[i]);
        arr[i].word_array = my_str_to_word_array(av[i]);
    }
    arr[ac].str = 0;
    arr[ac].copy = 0;
    arr[ac].word_array = 0;
    arr[ac].length = 0;
    return arr;
}
