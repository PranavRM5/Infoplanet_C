#include<stdio.h>
int main()
{
	char s[3][10];
	int i;
	printf("\nEnter a three string  ");
	for(i=0;i<=2;i++)
	gets(&s[i][0]);
	printf("\n");
	for(i=0;i<=2;i++)
	printf("%s\n",s[i]);
}
