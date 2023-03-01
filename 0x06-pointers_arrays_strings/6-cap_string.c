#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @n: input value
 *
 *
 * Return: string
 */
char *cap_string(char *s)
{
int i, j;
char prev = ' ';

for (i = 0; s[i] != '\0'; i++)
{
if (prev == ' ' || prev == '\t' || prev == '\n' ||
prev == ',' || prev == ';' || prev == '.' ||
prev == '!' || prev == '?' || prev == '"' ||
prev == '(' || prev == ')' || prev == '{' || prev == '}')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 'a' + 'A';
}

prev = s[i];
}

return (s);
}
