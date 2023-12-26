#include<stdio.h>
float area(float, float);
int main()
{
	float l, b, a;
	printf("\nEnter the length and breadth ");
	scanf("%f%f",&l,&b);
	a=area(l,b);
	printf("\nArea of rectangle = %0.2f",a);
	return 0;
}
float area(float x, float y)
{
	return(x*y);
}
