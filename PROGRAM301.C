#include<stdio.h>
int add(int, int);
void main()
{
	int x, y, z;
	printf("\nEnter two integer ");
	scanf("%d%d",&x, &y);
	z=add(x, y);
	printf("\nAddition = %d",z);
}
int add(int a, int b)
{
	int s;
	s=a+b;
	return s;
}
