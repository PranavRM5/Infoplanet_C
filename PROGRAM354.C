//Passing array to function 
#include<stdio.h> 
void display (int *);
int main() 
{
	int a[5] ={10,20,30,40,50};
	int b[10] = {10,20,30,40,50,6,7,8,9,10};

     display(a);
     printf("\n");
     display(b);
     
} 
void display (int *p)
{
	int i;
	for(i=0;i<5;i++)
	{
	     printf("%d\t",p[i]);
	}
}
