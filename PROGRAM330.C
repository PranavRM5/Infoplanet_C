#include<stdio.h>
void display();
void main()
{
	display();
	display();
	display();
}
void display()
{
	static int a=10;
	printf("\n%d",a);
	a++;
}
