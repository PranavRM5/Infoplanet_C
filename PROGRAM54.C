#include<stdio.h>
int main()
{
	int x, y;
	printf("\nenter two number = ");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nx=%d",x);
	printf("\ny=%d",y);
}
