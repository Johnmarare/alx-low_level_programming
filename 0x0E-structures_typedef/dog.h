#ifndef "dog.h"
#define "dog.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct dog - has members describing a certain dog.
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
