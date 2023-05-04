#include "main.h"
/**
 * set_bit - sets a bit
 * @n: number
 * @index: index to set
 * Return: 1 when success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1lu << index);
	return (1);
}

