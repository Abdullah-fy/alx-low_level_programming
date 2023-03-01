#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to be copied from src
 *
 * Return: pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
