#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30], s2[30], t[30];
	printf("\nEnter the string1");
	gets(s1);
	printf("\nEnter the string2");
	gets(s2);
	
	strcpy(t,s1);
	strcpy(s1,s2);
	strcpy(s2,t);
	
	printf("\nfirst string=%s",s1);
	printf("\nsecond string=%s",s2);
	
	return 0;
}
