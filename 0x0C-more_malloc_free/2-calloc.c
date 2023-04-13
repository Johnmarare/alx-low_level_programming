#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocated memory for an array
 * @nmemb: array
 * @size: array elements
 * Return: pointer to alocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	mem = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	return (mem);
}
