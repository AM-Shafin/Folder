/*
//Easy but not efficient way
#include<stdio.h>

int main()
{
	int a, b, x, gcd;

	scanf("%d %d", &a, &b);

	if(a < b) {
		x = a;
	}else {
		x = b;
	}

	for (;x >= 1; x--) {
		if (a % x == 0 && b % x == 0) {
			gcd = x;
			break;
		}
	}

	printf("GCD is %d\n", gcd);

	return 0;
} 
*/

//Efficient but not too easy
#include<stdio.h>

int main()
{
	int a, b, t, x, gcd;

	scanf("%d %d", &a, &b);

	if(a == b) gcd = a;
	else if (b == 0) gcd = b;
	else {
		while (b != 0) {
			t = b;
			b = a % b;
			a = t;
		}
		gcd = a;
	}

	printf("GCD is %d \n", gcd);

	return 0;
}