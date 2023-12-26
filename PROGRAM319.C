#include<stdio.h>
int factorial(int);
int main()
{
	int x, y;
	printf("\nEnter the number ");
	scanf("%d",&x);
	y=factorial(x);
	printf("%d! = %d",x,y);
	return 0;
}
int factorial(int n)
{
	int f=0;
	
	if(n==1)
	return 1;
	
	f=n*factorial(n-1);
	return f;
}
