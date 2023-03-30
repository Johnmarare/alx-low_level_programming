#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses array
 * @a: string array
 * @n: elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
