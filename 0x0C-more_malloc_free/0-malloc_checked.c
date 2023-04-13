#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory
 * @b: bytes size
 * Return: pointer to malloc
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
