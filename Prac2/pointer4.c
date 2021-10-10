#include <stdio.h>

int main(){

	int x = 10; //Value of Variblae is 10 here.
	int *p; //A pointer variable declared

	printf("Value of x: %d\n", x); //Value of x is 10

	p = &x; //P contain Address of x
	*p = 20; //Chnage value to 20 of the variable that P contains(x in this case)

	printf("Value of x: %d\n", x); //value of x is 20

	x = 15; //x value is 15

	printf("Value of x: %d\n", x); //x value is 15

	printf("Value stored at location %p is %d\n", p, *p); //Location:<memoryAddress> of addressed varibales value(x's value)

	printf("Address of x: %p\n", &x); //memory address of variable x;
	printf("Value of p: %p\n", p);//value of pointer P == value of variable x;

	return 0;
}