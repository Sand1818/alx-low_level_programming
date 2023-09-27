#include "main.h"

/**
 * sqrt_a - checks for the square root of a
 * @b: sqrt check
 * @a: num find sqrt of
 *
 * Return: -1 or sqrt of b
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
