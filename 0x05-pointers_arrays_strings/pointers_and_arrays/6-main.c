#include <stdio.h>
/**
 * main - deferencing pointers, example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	*p = 402;
	*pp = 'o';
	printf("value of 'n': %d\n", n);
	printf("value of '*pp': %d\n", *pp);
	printf("value of 'c': %d ('%c')\n", c, c);
	printf("value of '*pp': %d ('%c')\n", *pp, *pp);
	return (0);
}
