#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2D array of int
 * @width: widt h
 * @height: height
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **cat;
	int a;
	int b;

	if  (width <= 0 || height <= 0)
	return (NULL);

	cat = malloc(sizeof(int*) * height);

	if (cat == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		cat[a] = malloc(sizeof(int) * width);

		if (cat[a] == NULL)
		{
			while (a >= 0)
				free(cat[a--]);
			free(cat);
			return (NULL);
		}

		for (b = 0; b < width; b++)
			cat[a][b] = 0;
	}
	return (cat);
}
