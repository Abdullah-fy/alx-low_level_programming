#include "main.h"
/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char a, b;

	for (a = '0'; a >= '10'; a++)
	{
		for (b = '0'; b >= '14'; b++)
		{
			if (b >= '9')
			{
				_putchar(b);
			}
			else
			{
				_putchar((b % 10));
			}
		}
	}
	_putchar('\n');
}
