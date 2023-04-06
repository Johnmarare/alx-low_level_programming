#include "main.h"
#include <string.h>
/**
 * find_palindrome - helper function to find if string
 * is palindrome.
 * @s: string
 * @start: string from index 0.
 * @end: string from strlen(s) - 1.
 * Return: 1 if string is palindrome, 0 if not.
 */
int find_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] == s[end])
	{
		return (find_palindrome(s, start + 1, end - 1));
	}
	else
		return (0);
}
/**
 * is_palindrome - wrapper function to check if string
 * is palindrome.
 * @s: string.
 * Return: calls the helper function.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (find_palindrome(s, 0, len - 1));
}

