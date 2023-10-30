#include "main.h"

/**
 * read_textfile - reads a text file and prints letters
 * @filename: file's name
 * @letters: number of letters printed
 * Return: 0 (error), number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	int len, wchar;
	char *bf;

	if (filename == NULL || letters == 0)
		return (0);
	bf = malloc(sizeof(char) * (letters));
	if (bf == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		free(bf);
		return (0);
	}
	len = read(fl, bf, letters);
	if (len == -1)
	{
		free(bf);
		close(fl);
		return (0);
	}

	wchar = write(STDOUT_FILENO, bf, len);

	free(bf);
	close(fl);
	if (wchar != len)
		return (0);
	return (len);
}
