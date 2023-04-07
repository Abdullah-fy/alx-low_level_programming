#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to convert to binary
 *
 * Discription: j initialized by 0 and then make 1 from the left
 * then when j more then 0 go inside the loop the if n and j are
 * 1 we print 1 in console else 0 and the make other j from right
 * 1 and again
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	unsigned int bit = sizeof(unsigned long int) * 8;

	int i, j = 0;

	for (i = bit - 1; i >= 0; i--)
	{
		if (n & (mask << i))
		{
			_putchar('1');
			j = 1;
		}
		else if (j)
			_putchar('0');
	}

	if (!j)
		_putchar('0');
}
