#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Description: This function checks if the index is larger than or equal to
 * the size of an unsigned long int.If it is, it returns -1 indicating an error
 * Otherwise, it sets the value of the bit at the given index to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1 << index);
		return (1);
}
