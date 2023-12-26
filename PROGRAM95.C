#include<stdio.h>
int main()
{
	char ch;
	printf("\nenter a character ");
	scanf("%c",&ch);
	  if(ch=='A')
	   printf("\nExcellent");
	 else if(ch=='B')
	    printf("\n Good");
	 else if(ch=='C')
	    printf("\nFair");
	  else if(ch=='D')
	    printf("\nPoor");
	  else if(ch=='F')
	    printf("\nFail");
	   else
	    printf("\ninvalid input ");
}
