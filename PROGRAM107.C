#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter a character ");
	scanf("%c",&ch);
	
	if(ch=='r'||ch=='R')
	printf("\nRed");
	else if(ch=='g'||ch=='G')
	printf("\nGreen");
	else if(ch=='b'||ch=='B')
	printf("\nBlue");
	else
	printf("\nBlack");
}
