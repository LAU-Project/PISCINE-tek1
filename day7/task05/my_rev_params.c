/*
** EPITECH PROJECT, 2026
** rev params
** File description:
** rev params
*/

#include <unistd.h>

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

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[argc - i - 1]);
        my_putchar('\n');
    }
    return 0;
}
