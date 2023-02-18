#include <stdio.h>
/**
 * main -Entry point
 * Description: prints allsingle digit numbers of
 * base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	for (n = 1; n < 10; n += 2)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
