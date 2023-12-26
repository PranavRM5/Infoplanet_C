#include<stdio.h>
int main()
{
	int x=10, y=20, t;
	int *p=&x ,*q=&y;
	
	printf("\nValue before Swapping");
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	
	t   =*p;
	*p=*q;
	*q=t;
	printf("\nValue After Swapping");
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	return 0;
}
