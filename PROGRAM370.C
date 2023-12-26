#include<stdio.h>
int main()
{
	short int a[5]={10,20,30,40,50};
	short int *p;
	int i;
	
	p=a;
	printf("\nAddress   | Value ");
	for(i=0;i<5;i++)
	{
		printf("\n%u|%d",p,*p);
		p++;
	}
	return 0;
}
