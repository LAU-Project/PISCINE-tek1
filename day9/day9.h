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
struct info_param *my_params_to_array(int ac, char **av);
int my_show_param_array(struct info_param const *par);

#endif /* !DAY4_H */
