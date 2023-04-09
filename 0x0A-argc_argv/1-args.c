#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int total;
	(void)argv;

	total = argc - 1;

	printf("%d\n", total);

	return (0);
}
