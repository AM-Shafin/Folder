//chapter 6 arrays
#include <stdio.h>

int main()
{
	int ft_marks, st_marks, final_marks;
	double total_marks;

	printf("Insert First, second and Final testimonial marks: \n");
	scanf("%d %d %d", &ft_marks, &st_marks, &final_marks);

	total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
	printf("\t \t %0.0lf\n", total_marks);

	return 0;
}