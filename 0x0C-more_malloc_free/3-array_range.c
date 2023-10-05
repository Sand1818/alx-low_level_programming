#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min values stored
 * @max: max values stored
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *cat;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	cat = malloc(sizeof(int) * size);

	if (cat == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		cat[i] = min++;

	return (cat);

}
