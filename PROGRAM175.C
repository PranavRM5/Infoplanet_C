#include<stdio.h>
void main()
{
	int n, r, m=0;
	printf("\nenter the no");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r>m)
		m=r;
		n=n/10;
	}
	printf("\nLargest = %d ",m);
}
