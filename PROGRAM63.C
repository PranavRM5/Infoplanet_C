#include<stdio.h>
int main()
{
	int n;
	printf("\nenter a number  ");
	scanf("%d",&n);
	if(n<=50)
	{
		printf("\n%d is not greater than 50",n);
	}
	if(n>50)
	{
		printf("\n%d is greater than 50",n);    
	}
}
