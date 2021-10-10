#include <stdio.h>

int main()
{
	int i, num, counter = 0;
	double total_marks[40] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73, 62, 66, 76, 70, 67, 65, 77, 63};

	printf("What number do you want to sort out?\n");
	scanf("%d", &num);

	for (counter = 0, i = 0; i < 40; ++i)
	{
		if(total_marks[i] == num){
			counter = counter + 1;
		}
	}

	printf("%d students have got Total Mark of %d\n", counter, num);
	return 0;
}

