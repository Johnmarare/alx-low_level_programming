#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arguments passed.
 * @argv: points to the arguments passed
 * Return: 1 for error, 0 for success.
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if (cents >= 25)
		{
			cents = cents - 25;
			continue;
		}
		if (cents >= 10)
		{
			cents -= 10;
			continue;
		}
		if (cents >= 5)
		{
			cents -= 5;
			continue;
		}
		if (cents >= 2)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
