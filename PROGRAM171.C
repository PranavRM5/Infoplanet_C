#include<stdio.h>
void main()
{
	int i, n, r, s=0;
	printf("\nenter the number ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of digits=%d",s);
}
