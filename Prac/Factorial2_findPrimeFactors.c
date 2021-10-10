/*
that find the factorial of input as example 5! = 120 and find prime factors of it 2x2x2x3x5=120 and output the factors with 
how many times same factors are shown like (2, 3) (3, 1) (5, 1) because 
there're 3 two, 1 three and 1 Five as the prime factors of 120 and no matter how big the input is, 
I have to show only the prime factors from 2-99(1 < n < 100).
*/
#include <stdio.h>

int main()
{
	int array[100];
	int Prime_num[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int num, factorial = 1;
	int count;
	int i = 0, n = 100, m;
	int j = 0, l = 0, k = 0, factorsCount = 0;

	printf("Enter a positive interger for it's factorial\n");
	scanf("%d", &num);

	for(n = 0; n < 100; n++){
		array[n] = 0;
	}

	for(j=1; j<=num; j++){
		factorial=factorial*j;
	}

	printf("%d is the factorial of %d \n", factorial, num);

	for(count = 2; factorial > 1; count++)
	{
		while(factorial % count == 0){
			array[i] = count;
			printf(" %d", array[i]); //test checking the elements
			i++;
			factorial = factorial / count;
		}
	}

	for(l=0; l<100-1; l++){
		factorsCount = 1;
		for(k = l+1; k < 100; k++){
			if(array[l]==array[k]){
				factorsCount++;
			}else{
				break;
			}
		}
		if(factorsCount>1){
			printf("\n %d, %d", array[l], factorsCount);
			l+=(count-1);
		}
	}


/*	while(n > 0){
		n--;
	if(Prime_num[l] == array[k]){
		factorsCount = factorsCount + 1;
		k++;
	}
	else{
		printf("\n %d, %d", Prime_num[l], factorsCount);
		l++;
		factorsCount = 0;
		k = 0;
	}
	}*/

	return 0;
}

































/*// Program to print all prime factors
# include <stdio.h>
# include <math.h>

// A function to print all prime factors of a given number n
void primeFactors(int n)
{
	while (n%2 == 0) 	// Print the number of 2s that divide n
	{
		printf("%d ", 2);
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			printf("%d ", i);
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		printf ("%d ", n);
}

// Driver program to test above function 
int main()
{
	int n = 315;
	primeFactors(n);
	return 0;
}
*/