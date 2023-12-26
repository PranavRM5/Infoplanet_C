#include<stdio.h>
int main()
{
	float r, c, n;
	printf("\nEnter rate of banana ");
	scanf("%f",&r);
	printf("\nEnter quantity of banana ");
	scanf("%f",&n);
	c = r/12*n;
	printf("\ncost of banana = %0.2f",c);
}
