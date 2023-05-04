#include "main.h"
/**
 * flip_bits - Finds the number of bits you would need to flip
 *	       to get from one number to another.
 *
 * @n: number to convert
 * @m: number to be converted to
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int i;

	if (n == m || (n == 0 && m == 0))
	{
		return (0);
	}
	for (count = i = 0; i < 64; i++, count++)
	{
		if (((n >> i) & 1) == ((m >> i) & 1))
		{
			count--;
		}
	}
	return (count);
}
