#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by newline
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * Return: type void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);

	printf("\n");
}
