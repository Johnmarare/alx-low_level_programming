#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;
	int i;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
