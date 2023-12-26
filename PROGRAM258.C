#include<stdio.h>
void main()
{
	int a[10], i, c=0;
	printf("\nEnter 10 number ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==15)
		c++;
	}
	printf("\n15 occur %d time ",c);
}
