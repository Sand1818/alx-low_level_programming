#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1-100
 * for multiples of 3 prints fizz
 * for multiples of 5 buzz
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}

	printf("Buzz");
	printf("\n");

	return (0);
}