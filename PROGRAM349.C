#include<stdio.h>
void display(int *, int );
void square(int *, int);
int main()
{
	int a[10]={10,20,30,40,50};
	
	printf("\nBefore");
	display(a,5);
	
	square(a,5);
	
	printf("\nafter");
	display(a,5);
	return 0;
}
void display(int *p, int n)
{
	int i;
	printf("\n");
	for(i=0;i<5;i++)
	  printf("%d\t", p[i]);
}
void square(int *p, int n)
{
	int i;
	printf("\n");
	for(i=0;i<5;i++)
	p[i]=p[i]*p[i];
}
