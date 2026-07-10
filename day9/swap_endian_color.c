/*
** EPITECH PROJECT, 2026
** swap endian
** File description:
** swap endian
*/

#include "day9.h"

union color_u
{
    int color;
    unsigned char bytes[4];
};

int swap_endian_color(int color)
{
    union color_u src;
    union color_u dst;

    src.color = color;
    dst.bytes[0] = src.bytes[3];
    dst.bytes[1] = src.bytes[2];
    dst.bytes[2] = src.bytes[1];
    dst.bytes[3] = src.bytes[0];
    return dst.color;
}
