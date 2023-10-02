#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars, initialises with a specific char
 * @size: size array
 * @c: char
 * Return: pointer array, NULL (error)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
