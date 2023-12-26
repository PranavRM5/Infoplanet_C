#include<stdio.h>
int main()
{
	int marks;
	printf("\nenter your marks ");
	scanf("%d",&marks);
	
	if(marks<40)
	 printf("\nFail:Better luck next time");     
	 
	 else if(marks<50)
	 printf("\nPass Class");
		 
	else if(marks<60)
	 printf("\nSecond Class");
	  
	else if(marks<80)
	 printf("\nFirst Class");
	 
	 else if(marks<=100)
	 printf("\nDistinction");
	 
	else
	  printf("\ninvalid input");
}
