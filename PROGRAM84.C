#include <stdio.h>
int main()
{
	char s[20];
	 int i;
	printf("Enter your name   ");
	
	gets(s);
	for (i=0; s[i]!='\0';i++)
	printf("%c",s[i]);
	//printf("%s"s[i]);
	puts(s);

}
