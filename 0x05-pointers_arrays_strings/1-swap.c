#include "main.h"
/**
 * swap_int - function that swaps integers
 * @a: input
 * @b: input
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
