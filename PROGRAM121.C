#include<stdio.h>
void main()
{
	int x, y, z, m;
	printf("\n enter two integer ");
	scanf("%d%d%d",&x,&y,&z);
	
	m=(x>y&&x>z) ? x : (y>z)? y: z ;
	
	printf("\n maximum = %d",m);
}
