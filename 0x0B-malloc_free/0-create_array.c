#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of array.
 * @c: char to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails.
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
