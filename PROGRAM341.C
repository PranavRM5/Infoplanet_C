#include<stdio.h>
void display();
int a=50;
void main()
{
	int x=10;
	printf("\nx=%d",x);
	printf("\na=%d",a);
	
	a+=10;
	display();
}
void display()
{
	
	printf("\na=%d",a);
}
