#include "main.h"
/**
 * findsqrt - helper function to find squareroot
 * @number: number to be checked
 * @sqroot: squareroot found
 * Return: squareroot.
 */

int findsqrt(int number, int sqroot)
{
	if (sqroot * sqroot == number)
	{
		return (sqroot);
	}
	if (sqroot == number / 2)
	{
		return (-1);
	}
	return (findsqrt(number, sqroot + 1));
}
/**
 * _sqrt_recursion - function to find sqroot of number
 * @n: number to find squareroot
 * Return: helper function.
 */
int _sqrt_recursion(int n)
{
	int sqroot = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (findsqrt(n, sqroot));
}
