#include<stdio.h>
void main()
{
	int x, y, m;
	printf("\n enter two integer ");
	scanf("%d%d",&x,&y);
	
	m=(x>y) ? x : y ;
	
	printf("\n maximum = %d",m);
}
