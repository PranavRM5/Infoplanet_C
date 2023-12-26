#include<stdio.h>
int main()
{
	int x, y;
	printf("\nenter a integer ");
	scanf("%d%d",&x,&y);
	
	if(x%y==0)
	{
	   printf("\n%d is divisible %d ",x,y);
	}
	else 
	{
		printf("\n %d is not divisible %d ",x,y);
	}
}
