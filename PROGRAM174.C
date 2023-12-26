#include<stdio.h>
void main()
{
	int d, n, r, c=0;
	printf("\nEnter the number ");
	scanf("%d",&n);
	printf("\nEnter the digit ");
	scanf("%d",&d);
	while(n!=0)
	{
		r=n%10;
		if(r==d)
		c++;
		n=n/10;
	}
	printf("\n%d occur %d times", d, c);
}
