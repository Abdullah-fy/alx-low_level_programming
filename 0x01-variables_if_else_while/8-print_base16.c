#include <stdio.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b < 'e'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
