#include<stdio.h>
void main()
{
	int i, j,space;
	space=4;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		space--;
	}
}
