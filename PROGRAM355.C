//Passing array to function 
#include<stdio.h> 
void display (int *, int);
int main() 
{
	int a[5] ={10,20,30,40,50};
	int b[10] = {10,20,30,40,50,6,7,8,9,10};

     display(a, 4);
     printf("\n");
     display(b,5);
     
} 
void display (int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	     printf("%d\t",p[i]);
	}
}
