#include <stdio.h>
/**
 * main- entry point
 * print using putchar
 * Return: always return 0
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	putchar('\n');
	ch++;
	}

	return (0);
}
