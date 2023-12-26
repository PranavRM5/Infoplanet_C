#include<stdio.h>
void main()
{
	char str[30];
	int i, c=0;
	printf("\nEnter the string ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='p'||str[i]=='P')
		c++;
		i++;
	}
	printf("\np occur %d times ",c);
}
