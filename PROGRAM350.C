#include<stdio.h>
void mystrcpy(char *, char *);
void main()
{
	char s1[30]="hello world";
	char s2[30];
	
	mystrcpy(s2,s1);
	
	printf("\nstring 1: %s",s1);
	printf("\nstring 2: %s",s2);
	
}
void mystrcpy(char *d,char *s)
{
	int i;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
}
