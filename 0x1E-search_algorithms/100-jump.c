#include "search_algos.h"
#include <math.h>

/**
 * linear_search - func searches for element in array using linear search
 * @array: array to be searched
 * @size: size of the array
 * @value: element to search
 *
 * Return: position of element, else -1
 */
int linear_search(int *array, size_t size, int value);
/**
 * jump_search - func searches for element in array using linear search
 * @array: array to be searched
 * @size: size of the array
 * @value: element to search
 *
 * Return: position of element, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t block = sqrt(size); /* initialize block size=sqrt(n) */

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%i]\n", i, array[i]);


	while (array[i] < value && i < size)
	{
		i += block;

		if (i < size)
		{
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		}

	}

	printf("Value found between indexes [%lu] and [%lu]\n", i - block, i);

	return (linear_search(array, size, value));
}
