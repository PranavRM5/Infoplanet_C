#include<stdio.h>
void repeat(char, int );
void main()
{
	repeat ('$',6);
	repeat('@',10);
}
void repeat(char ch, int n)
{
	int i;
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%c",ch);
	}
}
