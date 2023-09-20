#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to standard output
 * @c: char to print
 *
 * return: 0 (sucess), -1 (error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
