#include<stdio.h>
int Mult(int,int);
int main()
{
	int x, y, z;
	printf("\nEnter two Number ");
	scanf("%d%d",&x,&y);
	z= Mult(x, y);
	printf("Multiplication = %d",z);
	return 0;
}
int Mult(int a, int b)
{
	int mult=0;
	
	mult=a*b;
	
	return mult;
}
