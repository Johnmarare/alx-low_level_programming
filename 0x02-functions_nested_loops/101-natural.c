#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, sum, total_sum;

	sum = 0;
	total_sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
			total_sum = sum;
		}

	}
	printf("%d\n", total_sum);

	return (0);
}
