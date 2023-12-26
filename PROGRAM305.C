#include<stdio.h>
float area(float);
int main()
{
	float r, a;
	printf("\nEnter the radius ");
	scanf("%f",&r);
	a=area(r);
	printf("\nArea of circle = %0.2f",a);
	return 0;
}
float area(float x)
{
	return(3.14*x*x);
}
