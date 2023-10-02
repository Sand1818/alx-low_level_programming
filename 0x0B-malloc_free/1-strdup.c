#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: copied to new memory
 * Return: pointer to memory
 */

char *_strdup(char *str)
{
	char *cat;
	int i;
	int number = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		number++;

	cat = malloc(sizeof(char) * number + 1);

	if (cat == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cat[i] = str[i];

	return (cat);
}
