#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter a character ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	  printf("\n%c is vowel",ch);
	else if(ch=='A' || ch=='E' || ch=='I' || ch=='O'  ||ch=='U')
	  printf("\n%c is vowel",ch);
	else
	printf("\n%c is not vowel",ch);
}
