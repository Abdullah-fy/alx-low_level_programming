#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to search the bit in
 * @index: The position of the bit to retrieve
 *
 * Description: The number 63 refers to the highest index position
 * in unsigned long int. For example, if n == 11 and index == 2,
 * it means we want to get the bit at index 2 for the number 11.
 * We will shift n by 2 and then use the & operator to see if the
 * return is 1 or 0.
 *
 * Return: The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
