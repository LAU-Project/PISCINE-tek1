/*
** EPITECH PROJECT, 2026
** sort int array
** File description:
** sort int array
*/

#include "day4.h"

static void bubble(int i, int *array, int size)
{
    for (int j = 0; j < size; j++) {
        if (array[i] < array[j]) {
            my_swap(&array[i], &array[j]);
        }
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        bubble(i, array, size);
    }
}
