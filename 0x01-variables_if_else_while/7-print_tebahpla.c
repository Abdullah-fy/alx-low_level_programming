#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse shape
 * Return: Always 0 (success)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev <= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
