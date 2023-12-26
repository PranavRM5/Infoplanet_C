/Processing element of array without subscript/
#include<stdio.h>
int main()
{
	short int a[5]={10,20,30,40,50}; 
	short int *p;
	int i;
	
	p=a;
	printf("\nAddress\t\t|Value"); 
	for(i=1;i<=5;i++)
	{ 
	     printf("\n%u\t|%d",p,*p); 
	     p++;
	 }
     return 0;
}
