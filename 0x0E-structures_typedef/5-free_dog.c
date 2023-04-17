#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_dog - function to free memory allocated by malloc
 * @d: pointer to array
 */
void free_dog(dog_t *d)
{
	int i;

	for (i = 0; d[i]; i++)
	{
		free(i);
	}
	free(d[]);
}
