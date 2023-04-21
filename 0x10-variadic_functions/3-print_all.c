#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - print type char
 * @ap: argument pointer variable
 * Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print type int
 * @ap: argument pointer variable
 * Return: void
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print type float
 * @ap: argument pointer variable
 * Return: void
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_string - print type char *
 * @ap: argument pointer variable
 * Return: void
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	/*if (!str)*/
	/*{*/
	/*	printf("(nil)");*/
	/*	return;*/
	/*}*/
	printf("%s", str ? str : "(nil)");
}

/**
 * print_all - print all type
 * @format: argument type to print
 * @...: argument to print
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list any;
	int i, j;
	print_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(any, format);
	i = j = 0;

	while (format && format[j])
	{
		i = 0;
		while (ops[i].op)
		{
			if (ops[i].op[0] == format[j])
			{
				(ops[i].f)(any);
				if (format[j + 1])
				{
					printf(", ");
				}
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(any);
}
