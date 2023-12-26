#include<stdio.h>
int main()
{
	float f, c;
	printf("\nEnter temp. in fahrenheit  ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\ntemp.in celsius = %0.2f",c);
}
