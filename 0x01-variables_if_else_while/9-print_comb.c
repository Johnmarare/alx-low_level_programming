#include <stdio.h>
/**
 * main- Entry point
 *
 * Program prints all possible combinations,
 * of single digit numbers
 *
 * can only use the putchar function.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');

		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
