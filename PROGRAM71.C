#include<stdio.h>
int main()
{
	int x,y;
	printf("\nEnter two number   ");
	scanf("%d%d",&x,&y);
	if(x<y)
	{
		printf("\nMinimum = %d",x);
	}
	if(y<=x)
	{
		printf("\nMinimum = %d",y);
	}
	
}
