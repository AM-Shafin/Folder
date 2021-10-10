#include <stdio.h>

int main()
{
	int array[7];
	int num1=0, num2=0, num3=0, i;

	printf("Insert array elements: ");

	for(i = 0; i < 8; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] > num1)
		{
			num3 = num2;
			num2 = num1;
			num1 = array[i];
		}
		else if(array[i] > num2)
		{
			num3 = num2;
			num2 = array[i];
		}
		else if(array[i] > num3)
		{
			num3 = array[i];
		}
	}
	
	printf("The Original elements of array are:\n");

	for(int j = 0; j < 7; j++){
		printf("%d,", array[j]);
	}
	printf("\n\nThree largest elements are: %d, %d, %d", num1, num2, num3);

	return 0;
}