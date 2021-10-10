#include<stdio.h>
int main()
{
  int n;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i <= n; i++)
  {
    for(int j=1; j <= 2*n; j++)
    {
        if(j <= i || j > (2*n-i) ) 
        printf("*"); // star
        else 
        printf(" "); // space
    }

    printf("\n"); // new line
  }

  return 0;
}