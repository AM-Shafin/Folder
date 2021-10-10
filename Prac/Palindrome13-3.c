#include <stdio.h>

int main()
{
	int i, j, space, k = 0, n;
	n = 7;

	for(int i = n ; i > 0; i--){
		for(int j = 1; j <= n - i; j++){
			printf(" ");
	    } 
		for(int j = 1; j <= i; j++){
				printf("*");
			}
		printf("\n");
	}

	for(int i = 2;i <= n; i++){
		for(int j = 1; j <= n - i; j++){
			printf(" ");
		} 
		for(int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

    return 0;
}