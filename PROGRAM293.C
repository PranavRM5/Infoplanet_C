#include<stdio.h>
void main()
{
	char str[30];
	int i, c=0;
	printf("\nEnter the string ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		c++;
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		c++;
		i++;
	}
	printf("\nNumber of Vowel = %d ",c);
}
