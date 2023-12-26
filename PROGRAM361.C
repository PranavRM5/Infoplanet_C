#include<stdio.h>
void func1(void (*)());
void func2();
void func3();
int main()
{
	func1(func2);
	func1(func3);
	
	return 0;
}

void func1(void(*p)())
{
	p();
}

void func2()
{
	printf("\nfunc2 is called");
}

void func3()
{
	printf("\nfunc3 is called");
}
