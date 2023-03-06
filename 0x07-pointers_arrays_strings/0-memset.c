#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: pointer to put the constant 
 * @n: max bytes
 * @b: constant
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
