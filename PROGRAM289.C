#include<stdio.h>
void main()
{
	char str[30];
	int i;
	printf("\nEnter the string ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	i--;
	printf("\nReverse string is ");
	while(i>=0)
	{
		printf("%c",str[i]);
		i--;
	}
}
