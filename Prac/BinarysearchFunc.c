#include <stdio.h>

int b_search(int ara[], int low, int high, int key);

int main()
{
	int array[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
	int n = 16;
	int high_indx = 15;
	int low_indx = 0;
	int search;
	int index;

	printf("Insert the numebr you want to find: \n");
	scanf("%d", search);

	index = b_search(array, low_indx, high_indx, search);

	if (index == -1)
	{
		printf("Not found! %d isn't present in the list.\n", search);
	}
	else {
		printf("%d is present at location %d\n", search, index + 1);
	}

	return 0;
}

int b_search(int ara[], int low, int high, int key)
{
	

	while (low <= high)
	{
		int m = (high + low) / 2;
		
		if (ara[m] == key)
		{
			return ara[m];
			break;
		}
		else if (ara[m] < key)
		{
			return ara[m];
			break;
		}
		else
		{
			high = m - 1;
		}
	}
	return -1;
}