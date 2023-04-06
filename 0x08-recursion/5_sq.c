#include "main.h"
/**
 * findsqrt - helper function to find square root
 * @n: number to find its squareroot.
 * @start: starting point of our root check.
 * @end: end point of root check.
 * Return: squareroot of @n.
 */

int findsqrt(int n, int start, int end)
{
	int mid, ans;
	if (n < 0) /* check for negative number*/
	{
		return (-1);
	}
	if (start > end) /* check if natural number doesnt exist*/
	{
		return (-1);
	}
	mid = start + (end - start) / 2;

	if (mid * mid == n) /* square of mid is n*/
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (findsqrt(n, start, mid - 1));
	}
	else
	{
		ans = findsqrt(n, mid + 1, end);

		if (ans == -1)
		{
			return (mid);
		}
		return (ans);
	}
}
/**
 * _sqrt_recursion - function that checks squareroot of a number
 * @n: number to  be checked
 * Return: calls to the helper function.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (findsqrt(n, 1, n)); /* calls the helper function*/
}
