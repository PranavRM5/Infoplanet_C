#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30], s2[30],s3[30];
	printf("\nEnter the string 1 ");
	gets(s1);
	printf("\nEnter the string 2 ");
	gets(s2);
	
	
	strcpy(s3, s1);
	strcat(s3,s2);
	
	printf("\n string = %s",s3);
	return 0;
}
