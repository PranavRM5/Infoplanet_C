#include<stdio.h>
void main()
{
	int i, n,f= 1;

	printf("\nEnter the number  ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{	
		f = f * i;
	}
	printf("\n factorial = %d", f);
}
