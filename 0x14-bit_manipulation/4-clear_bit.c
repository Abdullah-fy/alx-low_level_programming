#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: is the index, starting from 0 of the bit you want to clear
 *
 * Description: first we check if the number of index larger or
 * equal to the size of unsigned long int, if true return -1,
 * else we make var called mask and it equal ~(1ul << index)
 * this part mean you will make shift to the index you want
 * to clear and make it 1 and then because you make NOT ~
 * operator out side all of 0 turned to 1 and the index
 * you want to edit will be 0 then you use AND operator
 * which add both of them together and because the index
 * you want to edit is 0 the add for them will be 0
 * and the others is 1 so it will not effect on the other
 * operator , (1 << index) in this part you can use 1ul
 * instead of 1 it will be good wiht unsigned long because
 * it tell the long of the int, you can not you it too
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1ul << index);
	*n &= mask;

	return (1);
}
