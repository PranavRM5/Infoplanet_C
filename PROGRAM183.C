#include<stdio.h>
void main()
{
	int n=0, s=0;
	do
	{
		s=s+n;
		printf("\nEnter the number ");
		scanf("%d",&n);
	}while(n>=0);
	printf("\nSum of Positive number=%d",s);
}
