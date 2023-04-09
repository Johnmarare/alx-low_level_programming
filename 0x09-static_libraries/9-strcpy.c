#include "main.h"
/**
 *_strcpy - copy a string
 * @dest: destination of copied string
 * @src: source
 * Return: returns to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
