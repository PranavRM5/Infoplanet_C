#include<stdio.h>
int main()
{
	float a, b, l, p;
	printf("\nenter the length and breadth ");
	scanf("%f%f",&l,&b);
	a = l*b;
	p = 2*(l+b);
	printf("\narea = %f",a);
	printf("\nperimeter = %f",p);
}
