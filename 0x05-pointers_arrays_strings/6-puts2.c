#include "main.h"
/**
 * puts2 - Alternative characters
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
