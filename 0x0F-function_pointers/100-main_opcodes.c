#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcode - print the opcode
 * @k: function address
 * @n: num 
 * Return: void
**/

void print_opcode(char *k, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", k[j]);
		if (j < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcode
 * @argc: arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcode((char *)&main, n);
	return (0);
}
