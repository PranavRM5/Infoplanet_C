#include<stdio.h>
int isEven(int);
int main()
{
	int x;
	printf("\nEnter the number ");
	scanf("%d",&x);
	if(isEven(x))
	printf("\n%d is even",x);
	else
	printf("\n%d is odd",x);
	return 0;
}
int isEven(int a)
{
	if(a%2==0)
	return 1;    //1-9 is true value 
	else
	return 0;    //0 is false value 
}
