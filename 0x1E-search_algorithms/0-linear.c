#include "search_algos.h"

/**
 * linear_search - searching algorithm to use
 * @array: pointer to the array
 * @size: size of the array
 * @value: element to search
 * Return: Value index if present, else -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
