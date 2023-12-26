//Passing array to function 
#include<stdio.h> 
void display (const int *, int);
void square(int *,int );
int main() 
{
	int a[5] ={10,20,30,40,50};

     display(a, 5);
     printf("\n");
     square(a,5);
     printf("\n");
     display(a,5);
     
} 
void display (const int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	     printf("%d\t",p[i]);
	}
}
void square(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
	}
}
