#include<stdio.h>
void main()
{
	int x, y;
	printf("\nEnter two integer");
	scanf("%d%d",&x,&y);
	
	switch(x>y)
	{
		case 1:printf("\n Maximum =%d",x);break;
		case 0:printf("\n Maximum =%d",y);
	}
}
