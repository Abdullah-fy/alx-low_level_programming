#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of float: %lu byte(s)\n", sizeof(float));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	return (0);
}
