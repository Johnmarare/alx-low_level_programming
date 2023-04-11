#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenetes two strings
 * @s1: destination string
 * @s2: source string.
 * Return: pointer to string for success, NULL for fail.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int len1;
	int len2;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 1;


	str = malloc(sizeof(char) * (size));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		str[len1 + i] = s2[i];
	}
	str[size - 1] = '\0';

	return (str);
}
