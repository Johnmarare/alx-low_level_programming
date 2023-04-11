#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplictes a string
 * @str: string
 * Return: NULL for fail, success pointer to s
 */
char *_strdup(char *str)
{
	char *s;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[length] = '\0';
	return (s);
}
