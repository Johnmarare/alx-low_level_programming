#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: points to memory area
 * @b: constant byte
 * @n: first bytes of memory area
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
