#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - function to free memory allocated by malloc
 * @d: pointer to array
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
