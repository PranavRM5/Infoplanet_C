#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int choice, x, y;
	do
	{
		system("cls"); //clrscr();
		printf("\n\n!!!!MENU!!!!"
		       "\n1.ADDITION"
		       "\n2.SUBSTRCTION"
		       "\n3.MULTIPLICATION"
		       "\n4.Division"
		       "\n5.EXIT");
		       
		       printf("\nEnter your choice ");
		       scanf("%d",&choice);
		       
		       if(choice>=1&& choice<=4)
		       {
		       	printf("\nEnter the number ");
		       	scanf("%d%d",&x,&y);
		       }
		       
		       switch(choice)
		       {
		       	case 1:printf("\nAddition=%d",x+y);break;
		       	case 2:printf("\nSubstraction=%d",x-y);break;
		       	case 3:printf("\nMultiplition=%d",x*y);break;
		       	case 4:printf("\nDivision=%d",x/y);break;
		       	case 5:printf("\nGood Bye");break;
                   default:printf("\nInvalid Input");
		       }
                   
		       getch();
	}while(choice!=5);
    
}
