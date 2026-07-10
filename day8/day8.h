/*
** EPITECH PROJECT, 2026
** day4
** File description:
** day4
*/

#ifndef DAY4_H
    #define DAY4_H

    #include <stdlib.h>
    /* MACRO */
    #define NB_LETTERS 26
    #define MAX_DIGITS 10
    #define FALSE 0
    #define TRUE 1
    #define ERROR -0
    #define NOT_FOUND -1
    #define MAX_INT 2147483647
    #define MIN_INT -2147483648
    #define ERR 0
    #define OFFSET 32
    #define HEX_BASE_LOWER "0123456789abcdef"
    #define SEP "abcdefghijqlmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

/* PROTO */
char *concat_params(int argc, char **argv);
int my_show_word_array(char *const *tab);
char **my_str_to_word_array(char const *str);
char *convert_base(char const *nbr, char const *base_from, char const *base_to);

#endif /* !DAY4_H */
