#include "main.h"

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i];
			}
			else if (i + j == size - 1)
			{
				sum2 = sum2 + a[j];
			}
		}
	}
}
