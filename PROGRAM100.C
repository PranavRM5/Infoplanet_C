#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number ");
	scanf("%d",&n);
	if(n>100&&n<200)
	   printf("\n%d is between 100 to 200",n);
	else 
	    printf("\n%d is not  between 100 to 200",n);
}
