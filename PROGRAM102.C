#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter a number ");
	scanf("%d",&n);
	if(n>-10&&n<10)
	   printf("\n%d is single digit number",n);
	else 
	    printf("\n%d is not single digit number",n);
}
