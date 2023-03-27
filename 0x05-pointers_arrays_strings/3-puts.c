#include "main.h"
/**
 * _puts- function that prints string to stdout
 * @str: input
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
