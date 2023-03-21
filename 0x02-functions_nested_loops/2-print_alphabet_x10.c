#include "main.h"
/**
 * print_alphabet_x10 - prototype function
 * Makes alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)

{
	int x;

	for (x = 0; x < 10; x++)
	{
		char y;

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);

		}

		_putchar('\n');

	}

}
