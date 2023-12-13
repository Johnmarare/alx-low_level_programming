#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for element in array using jump search
 * @array: array to be searched
 * @size: size of the array
 * @value: element to search
 *
 * Return: position of element, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j;
	size_t i = 0;
	size_t block = sqrt(size); /* initialize block size=sqrt(n) */

	if (array == NULL)
		return (-1);

	while (array[block] <= value && block < size)
	{
		i = block; /* shift block */
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		block += sqrt(size);
		if (block > size - 1) /* if block size exceeds the array */
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, block - 1);

	for (j = i; j < block; j++) /* Linear search in current block */
	{
		printf("Value checked array[%lu] = [%i]\n", j, array[j]);
		if (array[j] == value)
		{
		return (j); /* pos of element being searched */
		}
	}
	return (-1);
}
