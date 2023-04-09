#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer in first occurence of @c in @s, or NULL if
 * character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
