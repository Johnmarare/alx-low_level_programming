#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: characters to match search
 * Return: @s
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}

			temp++;
		}
		s++;
	}
	return (NULL);
}
