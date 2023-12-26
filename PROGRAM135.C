#include<stdio.h>
void main()
{
	int a, b, c;
	printf("\nEnter three lengths ");
	scanf("%d%d%d",&a,&b,&c);
   
   switch(a==b && a==c)
   {
   	case 1:printf("\nEquilateral");break;
    case 0: switch(a==b || a==c || b==c)
                  {
                  	case 1:printf("\nIsosceles");break;
                      case 0:printf("\nScelen");
                  }
   }
}
