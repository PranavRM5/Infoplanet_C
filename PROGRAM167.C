#include<stdio.h>
int main()
{
	int i, x, y, gcd=0;
	printf("\nEnter first number ");
	scanf("%d%d",&x,&y);
	for(i=1; i<=x&&i<=y; ++i)
	   {
		if(x%i==0&&y%i==0)
		gcd=i;
		
	    }
printf("gcd = %d",gcd);
}
