#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
