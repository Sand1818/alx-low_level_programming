#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory
 * @b: copied char
 * @n: num of copies
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array
 * @size: size element
 * Return: adress  allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cat;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cat = malloc(size * nmemb);

	if (cat == NULL)
		return (NULL);

	_memset(cat, 0, nmemb * size);

	return (cat);
}
