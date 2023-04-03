#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the location haystack where needle is found
 * else, returns NULL.
 */
char *_strstr(char *haystack, char *needle)
{

	int len1 = strlen(haystack);
	int len2 = strlen(needle);
	int i, j;
	int flag;

	for (i = 0; i < len1 - len2 + 1; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;
		}
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
