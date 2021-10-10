#include <stdio.h>

double temperature(double farenheit)
{
	double celsius;
	celsius = (farenheit - 32) * 0.5556;
	return celsius;
}

int main()
{
	double f;

	printf("Insert the temperature in Farenheit\n");
	scanf("%lf", &f);

	double c = temperature(f);
	printf("Inserted temperature in Celsius is %0.2lf", c);

	return 0;
}