#include<stdio.h>
void main()
{
	int i, n, r, p=1;
	printf("\nenter the number ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("product of digits=%d",p);
}
