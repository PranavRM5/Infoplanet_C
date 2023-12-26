#include<stdio.h>
int mult(int, int);
void main()
{
	int x, y, z;
	printf("\nEnter two integer ");
	scanf("%d%d",&x, &y);
	z=mult(x, y);
	printf("\nMultiplication = %d",z);
}
int mult(int a, int b)
{
	int s;
	s=a*b;
	return s;
}
