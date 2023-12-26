#include<stdio.h>
int SumOfDigit(int);
int main()
{
	int a, b;
	printf("\nEnter the number ");
	scanf("%d",&a);
	b=SumOfDigit(a);
	printf("\nSum of Digit=%d",b);
}
int SumOfDigit(int n)
{
	int r, sum=0;
	while(n!=0)
	{
	r=n%10;
	sum=sum+r;
	n=n/10;
	
	}
	return sum;
}
