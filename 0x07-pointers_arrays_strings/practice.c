#include <stdio.h>

int main(void)
{
	int num = 123;

	/*A normal pointer*/
	int *pr2;
	/*pointer pr1 is a double pointer*/
	int **pr1;
	/* Assining the address of variable num to pointer pr2*/
	pr2 = &num;
	/* assigning the adress of ponter pr2 to 
	 * the pointer-to-pointer pr1
	 */
	pr1 = &pr2;

	/*possible ways to find value of variable num*/
	printf("\n Value of num is: %d", num);
	printf("\n Value of num using pr2 is: %d", *pr2);
	printf("\n Value of num using pr1 is: %d", **pr1);

	/*possible ways to find address of num*/
	printf("\n Address of num is: %p", &num);
	printf("\n Address of num using ptr2: %p", pr2);
	printf("\n Address of num using ptr1: %p", *pr1);
	
	/*find value of pointer*/
	printf("\n value of pointer pr2 is: %p", pr2);
	printf("\n value of pointer pr2 using pr1 is : %p", *pr1);

	/*ways to find adress of pointer pr2*/
	printf("\n Address of pointer pr2 is: %p", &pr2);
	printf("\n Address of pointer pr2 using pr1 is: %p", pr1);

	/*Double pointer address and value*/
	printf("\n Value of pointer pr1 is: %p", pr1);
	printf("\n Address of pointer pr1 is %p", &pr1);

	return 0;

}
