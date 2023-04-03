#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: contains characters to match
 * Return: length of segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if ((s == NULL) || (accept == NULL))
		return (length);

	while (*s && strchr(accept, *s++))
	{
		length++;
	}
	return (length);
}
