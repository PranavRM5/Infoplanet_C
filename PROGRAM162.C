#include<stdio.h>
void main()
{
	int i, even=0, odd=0;
	for(i=2;i<=100;i+=2)
	{
		even=even+i;
	}
	for(i=1;i<=99;i+=2)
	{
		odd=odd+i;
	}
		printf("\nsum of even integer =%d",even);
		printf("\nsum of odd integer =%d",odd);
}
