#include "main.h"
#include <string.h>
/**
 * _memset - fills the first @n bytes of the memory
 * area pointed to by @s with constant byte @b.
 *
 * @s: points to memory area
 * @b: constant byte
 * @n: bytes
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
	}
	return (s);
}
