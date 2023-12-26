#include<stdio.h>
int factorial (int); 
int main()
{
	 int x, i, sum=0; 
	 printf("\nEnter the number");
     scanf("%d",&x); 
     for(i=1;i<=x; i++)
     { 
         sum=sum+factorial(i);
     }
     printf("\nSum=%d", sum);
     return 0;
}
int factorial (int n)
{
	int i, f=1; 
	for(i=1; i<=n; i++)
	{ 
	    f=f*i;
	 }
     return f;
}
