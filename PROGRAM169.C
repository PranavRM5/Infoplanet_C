#include<stdio.h>
void main()
{
	int i, x=0, y=1, sum;
	printf("\nfibonacci series");
	printf("\n0\t1\t");
	for(i=1;i<=18;i++)
	{
		sum=x+y;
		printf("%d\t",sum);
		x=y;
		y=sum;
	}
}
