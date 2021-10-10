#include <stdio.h>

int main()
{
	int num1, num2, num3;
	double total;

	num1 = 80;
	num2 = 74;
	num3 = 97;

	total = num1 / 4.0 + num2 / 4.0 + num3 / 2.0;

	printf("%0.0lf\n", total);
	return 0;
}