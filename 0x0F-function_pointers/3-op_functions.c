#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of a & b
 * @a: parameter
 * @b: parameter
 * Return: sum a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a & b
 * @a: parameter
 * @b: parameter
 * Return: difference a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples a & b
 * @a: parameter
 * @b: parameter
 * Return: product of a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a & b
 * @a: parameter
 * @b: parameter
 * Return: division a & b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - emainder of the division of a by b
 * @a: parameter
 * @b: parameter
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
