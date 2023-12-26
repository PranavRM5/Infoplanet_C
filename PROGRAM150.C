#include<stdio.h>
void main()
{
	int m, n, i;
	printf("\n Enter the number ");
	scanf("%d",&n);
	printf("\nTable of %d",n);
	for(i=1;i<=10;i++)
	{
		m=i*n;
		printf("\n%d x %d = %d",n,i,m);
		
	}
}
