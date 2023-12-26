#include<stdio.h>
void main()
{
	int a, b, c;
	printf("\nEnter three lengths ");
	scanf("%d%d%d",&a,&b,&c);
   
   if(a==b && a==c)
   printf("\nEquilateral");
   else 
     if(a==b || a==c || b==c)
     printf("\nIsosceles");
     else
     printf("\nScelen");
}
