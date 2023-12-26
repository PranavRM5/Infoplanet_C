#include<stdio.h>
void main()
{
	int x, y, z;
	printf("\nEnter a number ");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	   printf("\nLargest=%d",x);
	else if(y>z)
	    printf("\nLargest=%d",y);
	 else
	     printf("\nLargest=%d",z);
}
