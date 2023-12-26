#include<stdio.h>
void main()
{
	int i, c=0;
	
	for(i=100; i<=200;i++)
	{
		if(i%7==0)
		c++;
	}
	printf("total count=%d",c);
}
