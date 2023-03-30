#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes lowercase letters of
 * a string to uppercase
 * @s: string argument
 * Return: @s.
 */

char *string_toupper(char *s)
{
	int length, i;

	length = strlen(s);

	for (i = 0; i < length; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
