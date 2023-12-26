#include<stdio.h>
void main()
{
	char str[10][30];
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter string- %d",i+1);
		gets(str[i]);
	}
	printf("\string are: ");
	for(i=0;i<10;i++)
	{
		printf("\n%d, %s",i+1,str[i]);
	}
}
