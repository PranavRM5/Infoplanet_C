#include<stdio.h>
void japan();
void nepal();
void bhutan();
int main()
{
	void (*f[])()={japan ,nepal, bhutan};
	int i;
	printf("\nEnter choice number ");
	scanf("%d",&i);
	if(i>=0&&i<=2)
	f[i]();
	else
	printf("\nInvalid choice ");
	
	return 0;
}
void nepal()
{
	printf("\nHello, Nepal");
}
void japan()
{
	printf("\nHello, Japan");
}
void bhutan()
{
	printf("\nHello, Bhutan");
}
