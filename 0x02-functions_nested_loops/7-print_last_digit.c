#include "main.h"
/**
 * print_last_digit - computes the last digit of an integer
 *
 * @n: the integer whose last digit is computed.
 *
 * Return: the last digit of @n
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	_putchar(lastdigit + '0');

	return (lastdigit);

}
