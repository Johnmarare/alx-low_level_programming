#include <stdio.h>
/**
 * main- entry point
 * print using putchar
 * Return: always return 0
 */

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
