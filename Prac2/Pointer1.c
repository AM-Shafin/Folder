//A C program that shows print address and value of a variable;
#include <stdio.h>

int main()
{
	int x = 10; 

	printf("Value of x is %d\n", x);
	printf("Address of x is %p\n", &x);

	return 0;
}