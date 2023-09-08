#include <stdio.h>

/**
 * main - prints single digits of base 10 from 0
 * it will print  numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
