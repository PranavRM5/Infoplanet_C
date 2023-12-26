#include<stdio.h>
void main()
{
	int n, r, s=9;
	printf("\nenter the no");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r<s)
		s=r;
		n=n/10;
	}
	printf("\nsmallest = %d ",s);
}
