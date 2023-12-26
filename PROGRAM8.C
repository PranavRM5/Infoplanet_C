#include<stdio.h>
int main ()
{
	
	int x, y, t;
	
	printf("\nenter 1st integer ");
	scanf("%d",&x);
	printf("\nenter 2nd interger ");
	scanf("%d",&y);
	
	t = x;
	x = y;
	y = t;
	
	printf("\nx = %d",x);
	printf("\ny = %d",y);
}
