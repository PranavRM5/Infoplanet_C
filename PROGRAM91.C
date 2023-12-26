#include<stdio.h>
int main()
{
	int x, y;
	printf("\nEnter two integer ");
	scanf("%d%d",&x,&y);
	if(x%y==0)
	   printf("\n%d is divisible by %d",x,y);
	else
	   printf("\n%d is not divisible by %d",x,y);
}
