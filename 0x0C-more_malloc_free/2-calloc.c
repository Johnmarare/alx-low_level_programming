#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocated memory for an array
 * @nmemb: array
 * @size: array elements
 * Return: pointer to alocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, size * nmemb);
	return (mem);
}
