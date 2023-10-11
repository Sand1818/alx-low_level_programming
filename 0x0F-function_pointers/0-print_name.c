#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  prints name with pointer to function
 * @name: name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
