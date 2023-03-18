#include <stdio.h>
/**
 * main- Entry point
 *
 * Hexadecimal
 *
 * Return: Always returns 0.
 */

int main(void)

{
	char num, letter;

		for (num = 0; num < 10; num++)
		{
			putchar(num + '0');
		}
		for (letter = 'a'; letter < 'g'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
		return (0);
}
