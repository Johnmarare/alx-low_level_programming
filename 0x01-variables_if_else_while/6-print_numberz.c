#include <stdio.h>
/**
 * main- Entry point
 *
 * converts interger value of num to its corresponding ASCII
 * character code before printing to the console
 *
 * Return: Always return 0.
 */

int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);


}
