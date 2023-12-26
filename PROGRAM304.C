#include<stdio.h>
float div(int, int);
void main()
{
	int x, y;
	float z;
	printf("\nEnter two integer ");
	scanf("%d%d",&x, &y);
	z=div(x, y);
	printf("\nDivision = %.2f",z);
}
float div(int a, int b)
{
	int s;
	s=(float)a/b;
	return s;
}
