#include<stdio.h>
int isLower(char);
int main()
{
	int i, c=0;
	char str[30];
	printf("\nEnter the string ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		if(isLower(str[i]))
		c++;
		
		i++;
	}
	printf("\nLower Case =%d",c);
	return 0;
}
int isLower(char ch)
{
	if(ch>='a'&&ch<='z')
	return 1;
	else 
	return 0;
}
