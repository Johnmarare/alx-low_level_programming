#include "search_algos.h"

/**
 * binary_search - search value using the binary method
 * @array: pointer to the array to be searched
 * @size: size of the array
 * @value: element to be searched
 *
 * Return: value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t beg = 0;
	size_t end = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (beg <= end)
	{
		mid = beg + (end - beg) / 2;

		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i < end)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			beg = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
	}
	return (-1);
}
