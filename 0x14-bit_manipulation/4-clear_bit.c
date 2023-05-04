#include "main.h"
/**
 * clear_bit - changes the indexth bit to x
 * @n: number
 * @index: index where the change is made
 * Return: -1 when error, 1 when success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 0;

	if (index > 63)
	{
		return (-1);
	}
	*n = (*n & ~(1UL << index)) | (x << index);
	return (1);
}

