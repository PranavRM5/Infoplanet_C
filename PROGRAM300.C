#include<stdio.h>

void usa();
void japan();
void nepal();

void main()
{	
	printf("\nbeginning of main");
	nepal();
	usa();
	printf("\nEnd of main");
}

void nepal()
{
    printf("\nhello nepal");
    japan();
}

void japan()
{
    printf("\nhello japan");
}

void usa()
{
    printf("\nhello usa");
}
