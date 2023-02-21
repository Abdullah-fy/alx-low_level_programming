#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'c')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
