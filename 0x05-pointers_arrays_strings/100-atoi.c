#include "main.h"
#include <limits.h>
/**
 * _atoi - convert string to integer
 * @s: string
 * Return: converted string
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (res > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		res = res * 10 + s[i] - '0';
	}
	return (sign * res);
}
