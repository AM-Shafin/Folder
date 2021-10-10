#include <stdio.h>
#include <string.h>

int main()
{
	int array[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};
	int i, j, sum = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			sum = sum + array[i][j];
		}
		printf("\nSum of row %d: %d", i+1, sum);
	}
	printf("\n.-.-..-.-.-.-..-.-.-.-.-.-.-.-.-.-.-.-.\n\n");

	sum = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			sum = sum + array[j][i];
		}
		printf("\nSum of column %d: %d", i+1, sum);
	}
	return 0;
}