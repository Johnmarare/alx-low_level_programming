#include "main.h"
#include <string.h>
/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: substring
 * Return: i when found, null when not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{

		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
