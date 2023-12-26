#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int x;
	printf("\nEnter the string ");
	gets(str);
	x=strlen(str);
	printf("\nlength of string=%d",x);
	return 0;
}
