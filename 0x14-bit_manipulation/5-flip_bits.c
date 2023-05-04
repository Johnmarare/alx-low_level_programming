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
	unsigned int flip;

	/*take Xor of `n` and `m` and store in flip*/
	flip = n ^ m;
	/*use Brian Kernighan's algorithm to count set bits*/
	/*`count` stores the total bits set in `flip`*/
	count = 0;

	while (flip)
	{
		if (n == m || (n == 0 && m == 0))
		{
			return (0);
			break;
		}
		/*clear the least significant bit set*/
		flip = flip & (flip - 1);
		count++;
	}
	return (count);
}



