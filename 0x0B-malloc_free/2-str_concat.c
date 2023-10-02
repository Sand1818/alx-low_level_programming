#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string added end of s1
 * Return: pointer to new string conc
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	cat = malloc(sizeof(char) * (i + j + 1));

	if (cat == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++, j++;
	}

	cat[i] = '\0';
	return (cat);
}
