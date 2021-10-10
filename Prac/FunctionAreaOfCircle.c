#include <stdio.h>

double areaOfcircle(double radius_circle);

int main()
{
	double radius;

	printf("Enther the radius of circle: ");
	scanf("%lf", &radius);

	printf("Area of circle: %0.2lf \n", areaOfcircle(radius));

	return 0;
}

double areaOfcircle(double radius_circle)
{
	double area_circle;
	area_circle = 3.14 * radius_circle * radius_circle;

	return area_circle;
}