#include<stdio.h>
int isPrime(int);
int main()
{
	int x;
	for(x=2;x<=500;x++)
	{
   	if(isPrime(x))
   	printf("\n%d is Prime",x);
	}
    return 0;
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
