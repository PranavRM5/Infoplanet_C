#include<stdio.h>
void main()
{
	int i, n, c=0;
	printf("\nEnter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;	
	}
	if(c==2)
	printf("\n%d is prime number ",n);
	else
	printf("\n%d is not prime number ",n);
}
