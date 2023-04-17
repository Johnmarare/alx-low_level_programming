#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function to initialize variable
 * @d: pointer to struct dog.
 * @name: dogs name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: (*ptr).name is the same as ptr->name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
