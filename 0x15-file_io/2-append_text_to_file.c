#include "main.h"
#include <string.h>

/**
 * append_text_to_file - A function that appends text at the end of a file
 *
 * @filename: the file name
 * @text_content: the text of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, writee;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	/* Nothing to add, but file exists */

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/* Failed to open the file */

	len = strlen(text_content);
	writee = write(fd, text_content, len);
	close(fd);

	if (writee != len)
		return (-1);
	/* Failed to write to file */

	return (1);
}
