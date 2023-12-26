#include<stdio.h>
void main()
{
	int choice, x, y;
	printf("\!!!!MENU!!!!"
	       "\n1.ADDITION"
	       "\n2.SUBSTRACTION"
	       "\n3.MULTIPLICATION"
	       "\n4.DIVISION");
	       printf("\nEnter Choice ");
	       scanf("%d",&choice);
	       
	       if(choice>=1 && choice<=4)
	       {
	       	printf("\nEnter two number ");
	       	scanf("%d%d",&x,&y);
	       }
switch(choice)
{
case 1:printf("\n Addition = %d",x+y); break;	case 2:printf("\n Substraction = %d",x-y); break;   case 3:printf("\n Multiplication = %d",x*y); break; 
case 4:printf("\n Division = %.2f",(float)x/y); break;
default:printf("\nINVALID INPUT");
}
}
