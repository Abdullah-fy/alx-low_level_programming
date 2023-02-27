#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
       	putchar('\n');
}
