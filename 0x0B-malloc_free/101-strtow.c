#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strtow - splits strings to words
 * @str: string
 * Return: pointer to an array of string.
 */
char **strtow(char *str)
{
	char **s;
	int i, j = 0, k, word = -1;
	int len;

	if (*str == '\0' || str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	s = malloc(sizeof(char *) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (i - word > 1)
			{
				s[j] = malloc((i - word) * sizeof(char));
				if (s[j] == NULL)
				{/*free previously allocated memory before returning to null*/
					for (k = 0; k < j; k++)
					{
						free(s[k]);
					}
					free(s);
					return (NULL);
				}
				strncpy(s[j], &str[word + 1], i - word - 1);
				s[j][i - word - 1] = '\0';
				j++;
			}
			word = i;
		}
	}
	s[j] = NULL;
	return (s);
}
