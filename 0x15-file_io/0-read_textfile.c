#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file name
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, num_bytes_read, num_bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	num_bytes_read = read(fp, buffer, letters);
	if (num_bytes_read == -1)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fp);
	return (num_bytes_written);
}
