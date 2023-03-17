#include <stdio.h>
/**
 * main- Entry point
 *
 * learning to use other functions aside puts and printf
 * Return: returns to (1) success
 */

int main(void)

{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&err, sizeof(char), 59, stderr);
	return (1);
}
