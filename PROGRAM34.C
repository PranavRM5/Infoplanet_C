#include<stdio.h>
int main()
{
	float a, p, r;
	printf("\nenter the radius ");
	scanf("%f",&r);
	a = 3.14*r*r;
	p = 2*3.14*r;
	printf("\narea = %f",a);
	printf("\nperimeter = %f",p);
}
