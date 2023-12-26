#include<stdio.h>
int swap(int *,int *);
int main()
{
	int x=6, y=5;
	int *p=&x,*q=&y;
	
	printf("\nBefore swap");
	printf("\nx=%d",x);
	printf("\ny=%d\n",y);
	
	swap(p,q);
	
	printf("\nAfter swap");
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	
	return 0;
}
int swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
