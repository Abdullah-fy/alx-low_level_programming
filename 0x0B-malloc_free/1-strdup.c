#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}

	char *new_str = (char *) malloc(len + 1);

	if (new_str == NULL)
	{
	return (NULL);
	}

	for (int i = 0; i <= len; i++)
	{
	new_str[i] = str[i];
	}

	return (new_str);
}
