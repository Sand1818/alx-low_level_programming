#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * at a fiven index
 * @n: num pointer
 * @index: index
 * Return: 1 (success), -1 (error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cat;

	cat = 1;
	cat = cat << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1) /*Checks if 1 at position*/
		*n = cat ^ *n;

	return (1);
}
