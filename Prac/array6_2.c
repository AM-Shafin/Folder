#include <stdio.h>
int main()
{
	int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int i;

	for (i = 10; i >= 1; i--) {
		printf("%dth element is: %d\n", i, ara[i-1]);
	}
	return 0;
}

/* Output: 
10th element is: 100
9th element is: 90
8th element is: 80
7th element is: 70
6th element is: 60
5th element is: 50
4th element is: 40
3th element is: 30
2th element is: 20
1th element is: 10


Press any key to continue . . .
*/