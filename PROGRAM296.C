#include<stdio.h>
void main()
{
	char s[30], d[30];
	int i;
	printf("\nEnter the string : ");
	gets(s);
	
		i=0;
		while(s[i]!='\0')
		{
			d[i]=s[i];
			i++;
		}
		d[i]='\0';
		
	printf("\nSource=%s",s);
	printf("\nDestination=%s",d);
}
