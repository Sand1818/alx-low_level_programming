#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file's name
 * @text_content: text in file
 * Return: 1 (success), -1 (error)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int doc;
	ssize_t len = 0, olen = 0;
	char *cat;

	if (filename == NULL)
		return (-1);

	doc = open(filename, O_WRONLY | O_APPEND);
	if (doc == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (olen = 0, cat = text_content; *cat; cat++)
			olen++;
		len = write(doc, text_content, olen);
	}

	if (close(doc) == -1 || olen != len)
		return (-1);
	return (1);
}
