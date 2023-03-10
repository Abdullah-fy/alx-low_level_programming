#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
