#include "main.h"
/**
 * main - check the code
 *dicription : Write a function that prints the last digit of a number.
 *@n : int n is the value which i will use
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
