/*#include <stdio.h>

int main()
{
	int x = 10, y;
	int *p, *q;

	p = &x;
	y = *p;
	*p = 15;
	*q = 20;

	printf("Value of x: %d\n", x);
	printf("Value of y: %d\n", y);
	printf("Value of *p: %d\n", *p);
	printf("Value of *q: %d\n", *q);

	return 0;
}*/

#include <stdio.h>

int main() {

	int x = 10, y;
	int *p, *q;

	p = &x; //p contain x address
	q = &y; // q contain y address
	y = *p; // y = x = 10
	*p = 15; //content of p = x = 15
	*q = 20; //content of q = y = 20

	printf("Value of x: %d\n", x);
	printf("Value of y: %d\n", y);
	printf("Value of *p: %d\n", *p);
	printf("Value of *q: %d\n", *q);

	return 0;
}