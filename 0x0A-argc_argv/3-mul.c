#include <stdio.h>
/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atio(argv[1]);
		n2 = atio(argv[2]);
		printf("%d\n", n1 * n2);
	}
	return (0);
}
