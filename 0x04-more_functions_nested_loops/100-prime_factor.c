#include <stdio.h>
#include <math.h>
/**
 * main- Entry point
 *
 * Return: always 0.
 */
int main(void)
{
	long int x, y;
	long int number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			y = number / x;
		}

	}
	printf("%ld\n", y);
	return (0);
}
