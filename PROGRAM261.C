#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10], i, n, c=0;
	printf("\nEnter 10 number ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	fflush(stdin);
	printf("\nEnter a number ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		c++;
	}
	printf("\n%d occur %d times ",n,c);
}
