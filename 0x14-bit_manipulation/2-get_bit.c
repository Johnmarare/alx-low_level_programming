#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: The number
 * @index: index of the bit we want to print
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;
	/*unsign long is a 64-bit value. bit indexes range from 0-63*/
	if (index > 63)
	{
		return (-1);
	}
	/*shift your bits to the right ANDing with 1 results to 1 or 0.*/
	bits = (n >> index) & 1;
	/*returns bit-wise*/
	return (bits);
}
