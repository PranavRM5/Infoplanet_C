#include<stdio.h>
void main()
{
	int i, m, n;
	printf("\nEnter the number ");
	scanf("%d",&n);
	printf("\nTable of %d",n);
	for(i=1;i<=10;i++)
    {
		m=i*n;
		printf("\n%d x %d = %d",n,i,m);
	}
}
