/*
** EPITECH PROJECT, 2026
** print params
** File description:
** print params
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

static int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

void swap(char **a, char **b)
{
    char *tmp = *a;

    *a = *b;
    *b = tmp;
}

int my_strcmp(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    for (int i = 0; i < len1 && i < len2; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    return len1 - len2;
}

void mega_swap(int *j, int argc, int *i, char **argv)
{
    while (*j < argc) {
        if (my_strcmp(argv[*i], argv[*j]) > 0)
            swap(&argv[*i], &argv[*j]);
        (*j)++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    while (i < argc - 1) {
        j = i + 1;
        mega_swap(&j, argc, &i, argv);
        i++;
    }
    i = 0;
    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
