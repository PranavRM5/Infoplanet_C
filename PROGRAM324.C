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
	
	r=n%10;
	n=SumOfDigits(n/10);
	sum=n+r;
	
	return sum;
}
