#include<stdio.h>
void main()
{
	char str[30], ch;
	int i, c=0;
	printf("\nEnter the string ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		c++;
		i++;
	}
	printf("\nWord = %d",c+1);
}
