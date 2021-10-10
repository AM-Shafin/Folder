#include <stdio.h>

int main()
{
	int table[10][10];
	int i, j, odd, even, total = 0;

	for(i = 0; i < 10; i++) { //makes Multiplicaiton table
		for(j = 0; j < 10; j++) {
			table[i][j] = (i + 1) * (j + 1);
		}
	}

	for (i = 0; i < 10; i++) {	//prints Multiplication Table
		for(j = 0; j < 10; j++) {
			printf("%d x %d = %d\n",(i+1), (j+1), table[i][j]);
		}
		printf("\n");
	}
	
	odd=even=0; 

	for (i = 0; i < 10; i++) {  //claculate how many odds and evens are there in the array of Multiplication Table(table)
		for (j = 0; j < 10; j++) {
			if (table[i][j]%2 == 0){
				even++;
			}
			else{
				odd++;
			}
		}
	}
	printf("Odd:%d, Even:%d\n", odd, even); //prints result

	for(i = 0; i < 10; i++) {  //calculate total of all elements in the Multiplication Table(table)
		for (j = 0; j < 10; j++) {
			total = table[i][j] + total;
		}
	}
	printf("Total of all elements in array = %d", total); //prints result

	return 0;
}