/*  //with formula
#include<stdio.h>
int main()
{
	int n, sum;

	printf("Insert the maximum number: \n");
	scanf("%d", &n);
	sum = (n * (n + 1)) / 2;

	printf("Summation is %d \n", sum);

	return 0;
}
*/
/*
//without formula(for loop)
#include<stdio.h>

int main()
{
	int i, n, sum;
	printf("Insert the maximum number: \n");
	scanf("%d", &n);

	for (i = 1, sum = 0; i <= n; i++) {
		sum = sum + i;
	}

	printf("Summation is %d \n", sum);

	return 0;
}
*/


//find the summation of odd number in a upper limit range given
#include<stdio.h>

int main()
{
	int i, n, sum;
	printf("Insert the upper limit: \n");
	scanf("%d", &n);

	for (i = 1, sum = 0; i <= n; i += 2) {
		sum += i;
	}

	printf("Summation of odd numbers in given rangeis %d \n", sum);

	return 0;
}