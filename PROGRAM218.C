#include<stdio.h>
void main()
{ 
    int n, r, t, rev;
    
    for(t=1;t<=500;t++)
    {
    	n=t;
    rev=0;
    while(n!=0)
    {
    	  r=n%10;
    	  rev=rev*10+r;
    	  n=n/10;
    }
    if(t==rev)
    printf("\n%d is palindrome",t);
    }
}
