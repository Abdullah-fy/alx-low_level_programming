#include "main.h"
/**
 * rev_string - a function that reverses a string.
 *
 * @s: a pointer to reverse string.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[i] != '\0')
		i++;

	while (i > j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
