#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter a month number ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("\nmilk");break;
		case 2:printf("\ntea");break;
		case 3:printf("\ncoffee");break;
		default:printf("\nWater");
	}
}
