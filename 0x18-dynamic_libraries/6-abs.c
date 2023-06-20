#include "main.h"
/**
 * _abs- Entry point
 *
 * @num: the integer whose absolute value is to be computed.
 *
 * Return: the absolute value of @num..
 */

int _abs(int num)

{
	if (num < 0)
	{
		num = (-1) * num;
		return (num);
	}
	else
	{
		return (num);
	}
	return (0);
}
