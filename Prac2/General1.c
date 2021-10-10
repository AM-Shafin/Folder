#include <stdio.h>

int check_ver(char input);

int main()
{
	char input;
	int i;
	printf("Please enter single character: \n");
	input = getchar();

	if (1 == check_ver(input))
	{
		printf("=D Given input %c is a digit\n", input);
	}else{
		printf(":( Given input is not any Digit\n");
	}
	return 0;
}

int check_ver(char input){
	int i;

	if (input <= 57 && input >= 48)
	{
		return 1;
	}
	else{
		return 0;
	}
}