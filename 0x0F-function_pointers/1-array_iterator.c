#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - function entry point
 * @array: array of type int
 * @size: size of our array
 * @action: pointer to function
 * Return: of type void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
