#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at
 * a given index
 * @n: unsigned long int pointer
 * @index: bit index
 * Return: 1 (success), -1 (error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ty;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	ty = 1;
	ty = ty << index;
	*n = ((*n) | ty);
	return (1);
}
