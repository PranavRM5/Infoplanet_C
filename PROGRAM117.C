#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter a character ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("\n%c is vowel",ch);break;
		default:printf("\n%c is not vowel",ch);
	}
}
