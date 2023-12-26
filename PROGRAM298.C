#include<stdio.h>
void main()
{
	char str[10][30];
	int i, j;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the string %d ",i+1);
		gets(str[i]);
	}
	for(i=0;i<10;i++)
	{
		j=0;
		while(str[i][j]!='\0')
		{
			j++;
		}
		printf("\nLength of string-%d=%d",i+1,j);
	}
}
