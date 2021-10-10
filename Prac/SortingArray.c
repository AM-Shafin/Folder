//A program that sort an array from small to bigger number(using only 1 array).
#include <stdio.h>
int main() {
	int ara[] = {3, 1, 5, 2, 4};
	int temp, length = sizeof(ara)/sizeof(ara[0]);

	printf("Elements of original array: \n");
	for(int i = 0; i < length; i++) {
		printf("%d ", ara[i]);
	}

	//real sorting begain baybeh!!
	for(int i = 0; i < length; i++){
		for(int j = i + 1; j < length; j++) {
			if(ara[i]>ara[j]) {
				temp = ara[i];
				ara[i] = ara[j];
				ara[j] = temp;
			}
		}
	}

	printf("\n");

	//Displaying elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n"); 

    for (int i = 0; i < length; i++) {     
        printf("%d ", ara[i]);    
    }    
    return 0;
}












/*//A program that sort an array from small to bigger number.
#include <stdio.h>

int main()
{
	int ara1[]={3, 1, 5, 2, 4};
	int ara2[5], index_2 = 0;
	int  minimum, i, minimum_index;

	for(index_2 = 0; index_2 < 5; index_2++){
		minimum = 100000;
		for(i = 0; i < 5; i++){
			if(ara1[i] < minimum) {
				minimum = ara1[i];
				minimum_index = i;
			}
		}
		ara1[minimum_index] = 100000;
		ara2[index_2] = minimum;
	}

	for(i = 0; i < 5; i++) {
		printf("%d\n", ara2[i]);
	}

	return 0;
}*/