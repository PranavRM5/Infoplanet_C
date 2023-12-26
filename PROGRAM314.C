#include<stdio.h>
int isPrime(int);
int main()
{
	int x;
	printf("\nEnter the number ");
	scanf("%d",&x);
	if(isPrime(x))
	printf("\n%d is Prime",x);
	else
	printf("\n%d is non Prime",x);
}
int isPrime(int n)
{
     int i;
     for(i=2;i<n;i++)
     {
     if(n%i==0)
     return 0;
     }
return 1;
}
