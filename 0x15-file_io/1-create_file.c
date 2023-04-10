#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: is the file name
 * @text_content: the content in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, len, writee;

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fp == -1)
		return (-1);

	len = (text_content != NULL) ? strlen(text_content) : 0;
	writee = write(fp, text_content, len);
	close(fp);

	if (writee != len)
		return (-1);

	return (1);
}
