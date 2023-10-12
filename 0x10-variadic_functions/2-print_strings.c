#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: num strings passed to function
 * @...: num
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	char *sep;
	unsigned int a;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (a = 1; a < n; a++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", sep, str);
	}
	printf("\n");
	va_end(list);
}
