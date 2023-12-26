#include<stdio.h>
void main()
{ 
    int n, i, c;
    for(n=1;n<=500;n++)
    {
    	c=0;
    for(i=1;i<=500;i++)
    {
    	  if(n%i==0)
    	    c++;
    }
    if(c==2)
    printf("\n%d is prime number ",n);
    }
}
