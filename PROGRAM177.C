#include<stdio.h>
void main()
{
	int i, x=1/1, y=2/2, sum, n;
	for(i=1;i<=8;i++)
	{
		sum=x+y;
		sum=sum+x;
		x=i+1/i*2;
	}
	printf("\nSum=%d",sum);
}
