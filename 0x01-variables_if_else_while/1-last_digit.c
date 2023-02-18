#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
	}
	else if (n == 0)
	{
		printf("the last digit of %d is %d: the string and is 0", n, a);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a");
	}
	return (0);
}
