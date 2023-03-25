#include <stdio.h>

int main(void)
{


	long int first = 1, second = 2, sum, total_sum;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	sum = 0;
	total_sum =0;

	while (next <= 4,000,000)
	{
		if (next % 2 == 0)
		{
			sum += next;
			total_sum = sum;
		}
	first = second;
	second = next;

	next = first + second;

	}	

	return (0);

}
