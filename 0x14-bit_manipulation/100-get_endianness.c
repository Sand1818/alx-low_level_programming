#include "main.h"

/**
 * get_endianness - Checks the eniannes
 * Return: 0 (big endian). 1 (little endian)
 */

int get_endianness(void)
{
	char *cat;
	unsigned int a;

	a = 1;
	cat = (char *) &a;
	return ((int)*cat);
}
