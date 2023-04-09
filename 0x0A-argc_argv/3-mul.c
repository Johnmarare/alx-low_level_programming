#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: points to array of character string
 * Return: returns 1 for error, 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mult);
	}
	return (0);

}
