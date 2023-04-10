#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or the appropriate error code on failure
 */
int main(int argc, char **argv)
{
	FILE *fp_from, *fp_to;
	int bytes_read;
	char buffer[BUFFER_SIZE];
	/* Check if the number of arguments is correct */
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Declare file pointers and buffer */
	fp_from = fopen(argv[1], "r");
	if (fp_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_to = fopen(argv[2], "w");
	if (fp_to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		fclose(fp_from);
		exit(99);
	}
	/* Copy the contents of file_from to file_to */
	while ((bytes_read = fread(buffer, sizeof(char), BUFFER_SIZE, fp_from)) > 0)
	{
		int bytes_written = fwrite(buffer, sizeof(char), bytes_read, fp_to);
		if (bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			fclose(fp_from);
			fclose(fp_to);
			exit(99);
		}
	}
	/* Close file pointers */
	if (fclose(fp_from) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(fp_from));
		exit(100);
	}
	if (fclose(fp_to) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(fp_to));
		exit(100);
	}
	return (0);
}
