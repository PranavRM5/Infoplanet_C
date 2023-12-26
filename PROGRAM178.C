#include<stdio.h>
void main()
{
	int n, r, t, s=0;
	printf("\nEnter the number ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(s==t)
	  printf("\n%d is armstrong ", t);
	 else
	   printf("\n%d is not armstrong ", t);
}
