#include "main.h"
#include <string.h>
/**
 * _strcmp - compares string and returns integer
 * indicating result of the comparison
 * @s1: first string
 * @s2: second string
 * Return: 0. when equal, signed integer when not equal.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
