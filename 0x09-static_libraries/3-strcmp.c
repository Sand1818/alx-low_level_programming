#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
