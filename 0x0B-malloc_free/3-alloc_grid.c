#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that reurns a pointer to a 2 dimentional
 * arry of integers
 * @width: width(row) of the array
 * @height: height(column) of the array
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{

			for (j = 0; j < i; j++)
			{
				free(grid[i]);
			}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
