#include<stdio.h>

int main()
{
	int a, b, t, x, gcd, lmc, m;

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

	m = gcd * lmc;
	lmc = m / gcd;

	printf("LMC is %d \n", lmc);

	return 0;
}