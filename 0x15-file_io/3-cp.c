#include "main.h"

/**
 * file_chec - checks if can open a file
 * @file_from: file_from
 * @file_to: file_to
 * @argv: argument vector
 * Return: void
 */

void file_chec(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks code
 * @argc: num of argument
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int close_erro;
	ssize_t num_char;
	ssize_t nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_chec(file_from, file_to, argv);

	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(file_from, buf, 1024);
		if (num_char == -1)
			file_chec(-1, 0, argv);
		nwr = write(file_to, buf, num_char);
		if (nwr == -1)
			file_chec(0, -1, argv);
	}
	close_erro = close(file_from);
	if (close_erro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_erro = close(file_to);
	if (close_erro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
