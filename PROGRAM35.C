#include<stdio.h>
int main()
{
	int x, y, r;
	float d;
	printf("\nenter the value ");
	scanf("%d%d",&x,&y);
	r=x+y;
	printf("\naddition = %d",r);
	r=x-y;
	printf("\nsub= %d",r);
	r=x*y;
    printf("\nmultiplication = %d",r);
    d=float (x/y);
	printf("\ndivision = %f",d);
}
