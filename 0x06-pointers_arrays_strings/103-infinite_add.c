#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum, i, j;

/*Reverse the strings to make it easier to add the digits from right to left*/
	for (i = 0, j = len1 - 1; i < len1 / 2; i++, j--)
       	{

		char tmp = n1[i];
		n1[i] = n1[j];
		n1[j] = tmp;
	}
	for (i = 0, j = len2 - 1; i < len2 / 2; i++, j--)
       	{
		char tmp = n2[i];
		n2[i] = n2[j];
		n2[j] = tmp;
	}
	/*Add the digits one by one, from right to left*/
	for (i = 0; i < size_r; i++)
       	{
		sum = carry;
		if (i < len1)
	       	{
			sum += n1[i] - '0';
		}
		if (i < len2)
	       	{
		sum += n2[i] - '0';
		}
		if (sum >= 10)
		{
			carry = 1;                                                                         sum -= 10;
		}
	       	else
		{
			carry = 0;
		}
		r[i] = sum + '0';
	}
	/* Check if there is a carry left over*/
	if (carry > 0)
       	{
		return (0);
	}
	/*Reverse the result string and terminate it with a null character*/
	for (i = 0, j = size_r - 1; i < size_r / 2; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	r[size_r - 1] = '\0';                                                                                                                                                                                                                                    /*trim leading zeros from the result string*/
	while (*r == '0' && *(r + 1) != '\0')
	{
		r++;
	}
	return (r);
}
