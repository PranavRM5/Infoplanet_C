#include<stdio.h>
void main()
{
	int digit;
    
    printf("\n Enter a digit "); 
    scanf("%d",&digit ); 

switch (digit)
{
case 0: printf("\n ZERO"); break;
case 1:printf("\n ONE "); break;
case 2 : printf("\n TWO "); break;
case 3:printf("\n THREE"); break; 
case 4:printf("\n FOUR"); break;
case 5:printf("\n FIVE "); break;
case 6: printf("\n SIX "); break;
case 7: printf("\n SEVEN "); break;
case 8:printf("\n EIGHT"); break;
case 9: printf (" \nNINE"); break;
default: printf("\n NOT DIGIT ");
}
}
