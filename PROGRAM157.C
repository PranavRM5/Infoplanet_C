#include<stdio.h>
void main()
{
	int i, x, y, f=1;
	printf("\n enter value of x and y ");
	scanf("%d%d",&x,&y);
	for(i=1; i<=y;i++)
	{
		f=f*x;
	}
	printf("\n%d raise to %d  = %d",x, y, f);
}
