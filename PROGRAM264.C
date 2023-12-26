#include<stdio.h>
void main()
{
	int N, r, c=0;
	printf("\nEnter the number ");
	scanf("%d",&N);
	while(N!=0)
	{
		r=N%10;
		c++;
		N=N/10;
	}
	printf("\ntotal digit = %d",c);
}
