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
    #define ERR 0

/* PROTO */
void my_putchar(char c);

int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int count_valid_queens_placements(int n);

#endif /* !DAY4_H */
