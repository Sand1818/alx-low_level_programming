#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees 2D grid
 * @height: height size
 * @grid: 2D grid
 * Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
