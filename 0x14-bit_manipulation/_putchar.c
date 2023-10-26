#include <unistd.h>

/**
 * _putchar - prints char
 * @c: char to print
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
