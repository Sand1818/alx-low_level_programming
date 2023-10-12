#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  prints everything
 * @format: list types of arhuments
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int j = 0;
	int a = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[a])
		a++;

	while (format && format[j])
	{
		if (j  == (a - 1))
		{
			sep = "";
		}
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(valist);
}
