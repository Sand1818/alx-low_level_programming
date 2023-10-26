#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: constant character
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 0;
	int bb = 1;
	int a = 0;

	if (b == NULL)
		return (0);

	while (b[a + 1])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		a++;
	}

	while (a >= 0)
	{
		pow += ((b[a] - '0') * bb);
		bb *= 2;
		a--;
	}


	return (pow);
}
