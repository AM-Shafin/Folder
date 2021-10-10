// A program that use 1 string and print if string inserted is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
	char string[100];
	int i, c = 0, len;

	printf("Enter the string: ");
	gets(string);
	len = strlen(string);

	for(i = 0; i < len/2; i++) {
		if(string[i]==string[len-i-1]){
			c++;
		}
	}
	if(c==i){
		printf("String is palindrome");
	}
	else{
		printf("String is NOT palindrome");
	}
	return 0;
}




/*
//A program that use 1 string for inputs and has separate function to check if the string is palindrom or not. 
#include <stdio.h>
#include <string.h>
 
int checkpalindrome(char *s)
{
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
        return 1;
    else
        return 0;
 
 	
	  
 }
int main()
{
 
    char s[1000];  
   
    printf("Enter  the string: ");
    gets(s);
    
 
    if(checkpalindrome(s))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
     
     
}*/