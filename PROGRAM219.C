#include<stdio.h>
void main()
{ 
    int n, i;
    printf("\nEnter the number ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    	  if(n%i==0)
    	  break;
    }
    if(i==n)
    printf("\n%d is prime number ",n);
    else
    printf("\n%d is not prime number ",n);
}
