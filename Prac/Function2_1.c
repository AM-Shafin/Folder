#include <stdio.h>


int areaOfRect(int length, int breadth)
{
	int area; 
	area = length * breadth;
	return area;
}

int main()
{
	int l, b;

	printf("Insert the lenght and breadth of your rectrangle: \n");
	scanf("%d %d", &l, &b);

	int area = areaOfRect(l, b);
	printf("%d\n", area);
}

