#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - functon that points to type pointer char
 * @name: name to be printed
 * @f: function pointer that points to a pointer of type char
 * Return: type void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
