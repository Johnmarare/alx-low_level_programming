#include <stdio.h>
/**
 * main- Entry point
 *
 * This program shows the sizes of diffrent data types
 *
 * Return: Always returns (0), success
 */

int main(void)


{

	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));

	return (0);
}
