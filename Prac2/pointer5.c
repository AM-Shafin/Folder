#include <stdio.h>

int main() {
	int x = 10; 
	int y;
	int *p;
	printf("Value of x: %d\n", x); //value of x is 10 

	p = &x; //Its declared here that value of P contain address of x
	y = *p; //Y valued same as contained value of pointer p(x). so Y = 10, because x = 10
	*p = 15; //content of P is changed to 20, so x = 20

	printf("Value of x: %d\n", x); //x = 20, line:11
	printf("Value of y: %d\n", y); //Y = 10, old x value because y's value didn't change after assinging new value in *p/x
	printf("Value of *p: %d\n", *p);
	printf("Address of x: %p\n", &x);
	printf("Address of y: %p\n", &y);
	printf("Value of p: %p\n", p);

	return 0;
}