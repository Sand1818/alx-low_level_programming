#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap with @b
 * @b: integer to swap with @a
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
