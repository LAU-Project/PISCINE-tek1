/*
** EPITECH PROJECT, 2026
** day4
** File description:
** day4
*/

#ifndef DAY4_H
    #define DAY4_H

    /* MACRO */
    #define NB_LETTERS 26
    #define MAX_DIGITS 10
    #define FALSE 0
    #define TRUE 1
    #define ERROR -0
    #define NOT_FOUND -1
    #define MAX_INT 2147483647
    #define MIN_INT -2147483648

/* PROTO */
void my_putchar(char c);

void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_evil_str(char *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);

#endif /* !DAY4_H */
