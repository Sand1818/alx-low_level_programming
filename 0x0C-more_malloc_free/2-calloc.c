#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array with malloc
 * @nmemb: array
 * @size: size
 * Return: adress of allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cat;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cat = malloc(nmemb * size);

	if (cat == NULL)
		return (NULL);
	else
		return (cat);
}
