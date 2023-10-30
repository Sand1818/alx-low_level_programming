#include "main.h"

/**
 * create_file - creates a file
 * @filename: file's name
 * @text_content: text in file
 * Return: -1 (error), 1 (success)
 */

int create_file(const char *filename, char *text_content)
{
	int doc;
	int rwr;
	int numlet;

	if (!filename)
		return (-1);

	doc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (doc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
		;

	rwr = write(doc, text_content, numlet);

	if (rwr == -1)
		return (-1);

	close(doc);
	return (1);
}
