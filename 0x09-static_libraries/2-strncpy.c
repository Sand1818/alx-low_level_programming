#include "main.h"

/**
 * _strncpy - copie the string
 * @dest: array that returns
 * @src: pointer receiving the string
 * @n: times
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
