#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter a character ");
	scanf("%c",&ch);
	
	switch(ch)
	{
	          case 'A':printf("\nExcellent");break;
          	case 'B':printf("\nGood");break;
          	case 'C':printf("\nFair");break;
          	case 'D':printf("\nPoor");break;
           	case 'F':printf("\nFail");break;
           	default:printf("\n Invalid Input");
	}
}
