#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter a character ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'r':
	    case 'R':printf("\nRed"); break;
	    case 'g':
	    case 'G':printf("\nGreen"); break;
	    case 'b':
	    case 'B':printf("\nBlue"); break;
	    default:printf("\nBlack");
	}
}
