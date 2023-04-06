#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Description: If b == 1, the function adds it to number because what it's
 * doing is copying from b, and number is 0000. If b is 1, it's added to number
 * so number becomes 0001.When the loop runs again,the number is shifted to the
 * left to become 0010.If b is 1 again,it's added to number, so number becomes
 * 0011, and like this, if not one, the shift will happen without adding one.
 *
 * Return: The converted number, or 0 if there is one or more characters in the
 * string b that are not 0 or 1, or if b is NULL.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		number <<= 1;

		if (*b == '1')
		{
			number = number | 1;
		}
		b++;
	}

	return (number);
}
