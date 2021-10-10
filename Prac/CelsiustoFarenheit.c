/*
#include<stdio.h>

int main()
{
	double celsius, farenheit;

	printf("Enther the temperature in celsius: ");
	scanf("%lf", &celsius);

	farenheit = (celsius * 1.8) + 32;
	printf("Temperature in Farenheit is: %lf \n", farenheit);

	return 0;
} */

#include <stdio.h>
int main()
{
	double celsius, farenheit;

	printf("Enther the temperature in Farenheit:"); 
	scanf("%lf", &farenheit);

	celsius = (farenheit - 32) * 0.5556;

	printf("Temperature in Celsius is: %lf \n", celsius);

	return 0;
}