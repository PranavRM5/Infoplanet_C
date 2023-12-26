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
	printf("\nlength of string is %d",i);
}
