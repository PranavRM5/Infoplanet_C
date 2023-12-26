#include<stdio.h>
void main()
{
	char s1[30], s2[30], s3[60];
	int i, j;
	printf("\nEnter string 1 = ");
	gets(s1);
	printf("\nEnter string 2 = ");
	gets(s2);
	i=0;
	j=0;
	while(s1[i]!='\0')
	{
		s3[j]=s1[i];
		i++;
		j++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		s3[j]=s2[i];
		i++;
		j++;
	}
	s3[j] ='\0';
	printf("\nstring1=%s",s1);
	printf("\nstring2=%s",s2);
	printf("\nstring3=%s",s3);
}
