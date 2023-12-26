#include<stdio.h>
int sub(int, int);
void main()
{
	int x, y, z;
	printf("\nEnter two integer ");
	scanf("%d%d",&x, &y);
	z=sub(x, y);
	printf("\nSubtraction = %d",z);
}
int sub(int a, int b)
{
	int s;
	s=a-b;
	return s;
}
