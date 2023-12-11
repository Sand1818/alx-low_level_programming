#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: address of memory being filled
 * @b: wanted value
 * @n: number of bytes changed
 * Return: chanaged aray with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
