/*
** EPITECH PROJECT, 2026
** get color
** File description:
** get color
*/

#include "day9.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return (red << 16) | (green << 8) | blue;
}
