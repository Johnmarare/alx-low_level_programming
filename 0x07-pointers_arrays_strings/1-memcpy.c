#include "main.h"
#include <string.h>
/**
 * _memcpy - copies a block of data from one memory address @src
 * to another memory address @dest.
 *
 * @src: source
 * @dest: destination
 * @n: sizeof
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest = '\0';
	return (dest);
}
