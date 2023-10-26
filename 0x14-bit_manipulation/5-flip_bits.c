#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need
 * to flip to get from one number to another
 * @m: num 2 compare
 * @n: num 1 compare
 * Return: num of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int coun;

	coun = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			coun++;
		m = m >> 1;
		n = n >> 1;
	}

	return (coun);
}
