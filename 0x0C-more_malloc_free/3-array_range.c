#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum value required in the array
 * @max: Maximmum value required in the array
 * Return: pinter to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

