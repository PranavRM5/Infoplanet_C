#include<stdio.h>
#include<string.h>
int main()
{
	char s[30], r[30];
	int x, t;
	printf("\nEnter the string  ");
	gets(s);
	
	strcpy(r, s);	
	strrev(r);
	
	x=stricmp(s,r);
	
	if(x==0)
	printf("\n %s is palindrome",s);
	else
	printf("\n %s is not palindrome",s);
	return 0;
}
