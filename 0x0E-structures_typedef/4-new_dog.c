#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - defines a new dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog's info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
