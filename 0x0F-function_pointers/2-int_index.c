#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function entry point
 * @array: pointer to array
 * @size: size of our array
 * @cmp: function pointer to compare integers
 * Return: -1 if size is 0 or less, or if no element matches
 *	   i for function success.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
