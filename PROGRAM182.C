#include<stdio.h>
int main()
{
	float i, n, x=1, y=1, z=0, sum=0;
	
	for(i=1;i<=10;i++)
	{
		
	  	
		sum=sum+x/y;
		x=i+1;
		y=y*2;
		
	}
	printf("\nSum=%f",sum);
}
