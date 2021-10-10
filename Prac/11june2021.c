#include<stdio.h>
int main()
{
	double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;

	printf("Enter the loan amount: \n");
	scanf("%lf", &loan_amount);

	printf("Enter the interest rate: \n");
	scanf("%lf", &interest_rate);

	printf("Number of years: \n");
	scanf("%lf", &number_of_years);

	total_amount = loan_amount + loan_amount * interest_rate / 100.00;
	monthly_amount = total_amount / (number_of_years * 12);

	printf("Total amount: %0.2lf\n", total_amount);
	printf("Monthly amount: %0.2lf\n", monthly_amount);

	return 0;
}