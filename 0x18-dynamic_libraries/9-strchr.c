#include "main.h"
/**
 * _strchr - search for first occurence of a specific character c withon a string
 * @c: specific character
 * @s: string
 *
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}

	return (NULL);
}
