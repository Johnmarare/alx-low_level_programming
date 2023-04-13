#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates string to @n characters
 * @s1: dest
 * @s2: source
 * @n: desired length
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *p;
	unsigned int len1, len2, len;

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
	if (n >= len2)
	{
		len = len2;
	}
	else
	{
		len = n;
	}
	str = malloc(sizeof(char) * (len1 + len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	p = str;
	while (*s1)
	{
		*p++ = *s1++;
	}
	while (len--)
	{
		*p++ = *s2++;
	}
	*p = '\0';
	return (str);
}
