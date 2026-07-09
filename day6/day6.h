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
    #define NULL (void *)0
    #define OFFSET 32
    #define HEX_BASE_LOWER "0123456789abcdef"

/* PROTO */
void my_putchar(char c);

char *my_strcpy(char *dest, char const *str);
char *my_strncpy(char *dest, char const *str, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);

#endif /* !DAY4_H */
