#include<stdio.h>
void main()
{
	int a[10], i;
	printf("\nEnter 10 number ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	printf("\n%d",a[i]+5);
}
