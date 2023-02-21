#include "main.h"

/**
 * print_alphabet - function that prints alphabet in lowercase 
 *
 * Return: Always 0 
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
