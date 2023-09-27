#include "main.h"

/**
 * factorial - return factorial of a num
 * @n: num return factorial
 * Return: 0
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
