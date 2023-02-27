#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s: Pointer to the string to print.
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
