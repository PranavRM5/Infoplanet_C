#include<stdio.h>
char utol(char);
char ltou(char);
int main()
{
	char a, b;
	printf("\nEnter the character ");
	scanf("%c",&a);
	b=utol(a);
	printf("\nlower case=%c",b);
	b=ltou(a);
	printf("\nupper case=%c",b);
	return 0;
}
char utol(char ch)
{
	if(ch>='A'&&ch<='Z')
	return ch+32;
	else 
	return ch;
}
char ltou(char ch)
{
	if(ch>='a'&&ch<='z')
	return ch-32;
	else 
	return ch;
}
