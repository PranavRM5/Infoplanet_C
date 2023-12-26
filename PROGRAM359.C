#include<stdio.h>
void display();

int main()
{
	void (*p)();  //pointer to function declaration
	
	p=display;  //storing address in pointer
	p();              //function call through function pointer
	
	return 0;
}

void display()
{
	printf("\nHello World ");
}
