#include<stdio.h>
int main()
{
	int x=35;
	int *p;
	p=&x;
	printf("\nAddress of x=%u",&x);
	printf("\nValue of x=%d",x);
	
	printf("\n\nAddress of x=%u",p);
	printf("\nValue of x=%d",*p);
	return 0;
}
