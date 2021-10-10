#include <stdio.h>

int main() {
	//Opening & creating resource files
	FILE *ptrin_english, *ptrin_math, *ptrin_bangla, *ptrout_average;
	ptrin_bangla = fopen("bangla.txt", "r");
	ptrin_english = fopen("english.txt", "r");
	ptrin_math = fopen("math.txt", "r");
	ptrout_average = fopen("average.txt", "w");
	//Others valriable
	char roll, line1[50], line2[50], line3[50];
	float ara_ave[10];
	float mark_ban, mark_eng, mark_math;
	int i;

	for(i = 0; i < 11; i++) {
		fgets(line1, 50, ptrin_bangla);
		fgets(line2, 50, ptrin_english);
		fgets(line3, 50, ptrin_math);
		sscanf(line1, "%c %f", &roll, &mark_ban);
		sscanf(line2, "%c %f", &roll, &mark_eng);
		sscanf(line3, "%c %f", &roll, &mark_math);

		ara_ave[i] = (mark_math + mark_eng + mark_ban) / 3;
	}

	for (i = 0; i < 10; ++i)
	{
		printf("Element %d of array is %0.2f\n", i+1, ara_ave[i]);
	}

	for (i = 0; i < 10; ++i)
	{
		fprintf(ptrout_average, "%d\t%0.2f\n", i+1, ara_ave[i]);
	}


	//Closing all files
	fclose(ptrin_english);	
	fclose(ptrin_math);	
	fclose(ptrin_bangla);	
	fclose(ptrout_average);	
	return 0;
}