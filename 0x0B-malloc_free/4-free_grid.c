#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free 2 dimensional gid int tast 3
 * @grid: grid array
 * @height: array height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
