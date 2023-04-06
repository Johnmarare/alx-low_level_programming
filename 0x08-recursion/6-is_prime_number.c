#include "main.h"
/**
 * is_divisible - function to check if number is divisible
 * @number: number to be ckecked
 * @div: divisor
 * Return: Returns 0 if divisible, 1 if not divisible.
 */

int is_divisible(int number, int div)
{
	if (number % div == 0)
	{
		return (0);
	}
	if (div == number / 2)
	{
		return (1);
	}
	return (is_divisible(number, div + 1));
}
/**
 * is_prime_number -function to check for prime numbers
 * @n: passed number
 * Return: calls the is_divisible helper function
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
