#include "main.h"
/**
 * print_diagonal - Entry point
 * @n:input
 * Return: void.
 */

void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < n; s++)
		{
			if (i == s)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}

		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('\n');
	}
}
