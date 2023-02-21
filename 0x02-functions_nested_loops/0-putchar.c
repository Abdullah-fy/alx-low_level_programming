#include <stdio.h>
/**
 * main - check the code
 *Disciption: print putchar
 * Return: Always 0.
 */
int main(void)
{
	char abc[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
