#include <stdio.h>
#include <stdlib.h>
int main() {
	int array[10], n, i;
	system ("cls");
	printf("Enter the Decimal number: ");
	scanf("%d", &n);
	for(i = 0; n > 0; i++)
	{
		array[i] = n%2;
		n = n/2;
	}

	printf("\nConverted to binary: ");
	for(i = i-1; i >= 0; i--)
	{
		printf("%d", array[i]);
	}

	return 0;
}