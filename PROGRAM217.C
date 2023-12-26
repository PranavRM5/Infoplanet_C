#include<stdio.h>
void main()
{ 
    int n, r, t, s;
    for(t=1;t<=500;t++)
    {
    n=t;
    s=0;
    while(n!=0)
    {
    	  r=n%10;
    	  s=s+r*r*r;
    	  n=n/10;
    }
    if(t==s)
    printf("\n%d is Armstrong",t);
    }
}
