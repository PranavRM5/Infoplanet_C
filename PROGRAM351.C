//processing array without subscript notation
#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50};
	int *p,i;
	p=a;
	for(i=0;i<5;i++)
	{
	printf("%d\t",*p);
	p++;
	}
}
