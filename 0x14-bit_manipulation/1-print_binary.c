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
	unsigned long int j = 0;

	j = ~j >> 1;

	while (j > 0)
	{
		if (n & j)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		j = j >> 1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
