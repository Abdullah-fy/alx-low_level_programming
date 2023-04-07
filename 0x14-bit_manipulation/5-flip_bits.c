#include <stdio.h>
#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: number i want ot flip
 * @m: number i want to flip to
 *
 * Discription: i used NOR operator because if both m and n
 * are the same the result is 0 and if not the result is 1
 * so the diff will be 1 in only the unsame char which we
 * will need to flip and, we will go in the loop when the
 * two number are not the same and start count and make
 * shifts
 *
 * Return: the number of bits you would need to
 * flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
	count += diff & 1;
	diff >>= 1;
	}

	return (count);
}
