#include "main.h"
/**
 * more_numbers - Entry point.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}

			_putchar((n % 10) + '0');

		}
	_putchar('\n');
	}

}
