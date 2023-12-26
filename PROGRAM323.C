#include<stdio.h>
int SumOfDigits(int);
int main()
{
	int x, z;
	printf("\nEnter the Number ");
	scanf("%d",&x);
	z= SumOfDigits(x);
	printf("Sum Of Digits = %d",z);
	return 0;
}
int SumOfDigits(int n)
{
	int r, sum=0;
	
	if(n==0)
	return 0;
	
	return (n%10)+ SumOfDigits(n/10);
}
