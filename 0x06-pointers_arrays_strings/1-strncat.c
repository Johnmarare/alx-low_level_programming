#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates strings
 * @dest: destination.
 * @src: source.
 * @n: number of elements in string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 = strlen(dest);

	for (i = 0; i <= n; i++)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	return (dest);
}
