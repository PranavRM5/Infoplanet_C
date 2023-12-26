#include<stdio.h>
#include<string.h>
int main()
{
	char str[30], str1[30],t[30];
	int x;
	printf("\nEnter the string 1 ");
	gets(str);
	printf("\nEnter the string 2 ");
	gets(str1);
	
	strcpy(t,str);
	strcpy(str, str1);
	strcpy(str1,t);
	
	printf("\n string 1= %s",str);
	printf("\n string 2= %s",str1);
	return 0;
}
