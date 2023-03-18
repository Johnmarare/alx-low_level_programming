#include <stdio.h>
/**
 * main- Entry point
 *
 * prints letters in reverse
 *
 * Return: Always returns 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
