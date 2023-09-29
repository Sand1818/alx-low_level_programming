#include <stdio.h>

/**
 * main - prints num of arguments
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
