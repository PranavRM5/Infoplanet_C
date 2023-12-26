#include<stdio.h>
void main()
{
	char str[30], ch;
	int i, c=0;
	printf("\nEnter the string ");
	gets(str);
	printf("\nEnter the character ");
	scanf("%c",&ch);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		c++;
		i++;
	}
	printf("\n%c occur %d times ",ch, c);
}
