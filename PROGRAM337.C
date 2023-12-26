#include<stdio.h>
int main()
{
	int x=35, y=45;
	int *p;
	p=&x;
	printf("\n%d",*p);
	p=&y;
	printf("\n%d",*p);
	return 0;
}
