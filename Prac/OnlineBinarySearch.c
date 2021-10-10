#include <stdio.h>

int main()
{
	int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
	int low_indx = 0;
	int high_indx = 15;
	int search = 20;
	int mid_indx = (high_indx + low_indx) / 2;

	while(low_indx <= high_indx) {
		if(ara[mid_indx] < search) 
		{
			low_indx = mid_indx + 1;
		}
		else if (ara[mid_indx] == search) {
			printf("%d found at location %d. \n", search, mid_indx + 1);
			break;
		}else {
			high_indx = mid_indx - 1;
		}
		if (low_indx > high_indx){
			printf("Not found! %d isn't present in the list.\n", search);
		}
	}

	return 0;
}