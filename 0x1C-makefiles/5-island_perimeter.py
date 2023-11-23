#!/usr/bin/python3
"""
This module returns the perimeter of the
Island described in grid
"""


def island_perimeter(grid):
    """Perimeter of Island function definition

    Args:
        grid: descibed grid
    """

    peri = 0
    num_row = len(grid)
    num_col = len(grid[0])

    for i in range(num_row):
        for j in range(num_col):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    peri += 1
                if i == num_row - 1 or grid[i + 1][j] == 0:
                    peri += 1
                if j == 0 or grid[i][j - 1] == 0:
                    peri += 1
                if j == num_col - 1 or grid[i][j + 1] == 0:
                    peri += 1
    return peri
