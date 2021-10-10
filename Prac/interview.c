/*#include <stdio.h>

int main()
{
	char name[] = "Alexandra Abramov";
	double mobile_no = 999999999999;
	char month[] = "July";
	int date = 14;
	int year = 1985;

	printf("Name: %s\n", name);
	printf("Mobile number: %0.0lf\n", mobile_no);
	printf("Date of birth: %d %s %d \n", date, month, year);

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 0; i <= 10; ++i)
	{
		sum += i;
	}
	printf("Sum of first 10 natural number is: %d", sum);

	return 0;
}*/

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