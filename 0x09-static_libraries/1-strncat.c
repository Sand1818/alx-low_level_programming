#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input strng parameter
 * @src: input string parameter
 * @n: times interaction
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	j = 0;

	while (dest[j] != 0)
	{
		j++;
	}

	i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
