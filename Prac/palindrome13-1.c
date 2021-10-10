#include <stdio.h>

int main()
{
	int i, j, k = 0, n; //n = number of row
	printf("\n \tPlease enter the numbers of row: ");
	scanf("%d", &n);

	for(int i = n; i > 0; i--){
		
		for(int j = 1; j <= i; j++){
				printf("*");
			}
		printf("\n");
	}

	for(int i = 2;i <= n; i++){

		for(int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

    return 0;
}