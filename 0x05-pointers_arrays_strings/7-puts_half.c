#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = (length + 1) / 2;

	printf("%s\n", str + start_index);
}
