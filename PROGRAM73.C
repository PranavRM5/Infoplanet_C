#include<stdio.h>
int main()
{
	int n;
	printf("\nenter a integer ");
	scanf("%d",&n);
	
	if(n%7==0)
	{
		printf("\n%d is divisible by 7",n);
	}
	else
	{
		printf("\n%d is not divisible by 7",n);
	}
}
