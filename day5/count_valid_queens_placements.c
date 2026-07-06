/*
** EPITECH PROJECT, 2026
** queens
** File description:
** queens
*/

#include "day5.h"

static int is_safe_helper(int *columns, int i, int target_row, int col)
{
    if (i < 0)
        return 1;
    if (columns[i] == col
        || columns[i] - i == col - target_row
        || columns[i] + i == col + target_row)
        return 0;
    return is_safe_helper(columns, i - 1, target_row, col);
}

static int is_safe(int *columns, int row, int col)
{
    return is_safe_helper(columns, row - 1, row, col);
}

static int try_columns(int *columns, int row, int n, int col)
{
    int count = 0;

    if (col >= n)
        return 0;
    if (is_safe(columns, row, col)) {
        columns[row] = col;
        if (row == n - 1)
            count += 1;
        else
            count += try_columns(columns, row + 1, n, 0);
    }
    return count + try_columns(columns, row, n, col + 1);
}

int count_valid_queens_placements(int n)
{
    int columns[n > 0 ? n : 1];

    if (n <= 0)
        return 0;
    return try_columns(columns, 0, n, 0);
}
