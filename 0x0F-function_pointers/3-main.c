#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - provides results of an operation
 * @argv: array pointer
 * @argc: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cat, dog;
	char *op;

	if (argc != 4)
	{
		printf("error/n");
		exit(98);
	}

	cat = atoi(argv[1]);
	dog = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("error\n");
		exit(99);
	}

	if ((*op == '/' && dog == 0) || (*op == '%' && cat == 0))
	{
		printf("error/n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(cat, dog));
	return (0);
}
