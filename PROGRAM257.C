#include<stdio.h>
void main()
{
	int a[10], i, n=0, c=0;
	printf("\nEnter 10 number ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter number ");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		if(a[i]==n)
		c++;
	}
	printf("\n%d occur %d time ",n,c);
}
