#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string to conatenate to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[1] != '\0'; i++)
		s2len++;

	cat = malloc(sizeof(char) * (s1len + n) + 1);
	if (cat == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
				cat[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
				cat[i] = s2[i];
		cat[s1len + i] = '\0';
	}
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
	cat[i] = s1[i];
	for (i = 0; i < n; i++)
	cat[s1len + i] = s2[i];
	cat[s1len + i] = '\0';
	}
	return (cat);
	}
