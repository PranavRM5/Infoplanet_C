#include<stdio.h>
void main()
{
	float marks;
	printf("\nEnter marks ");
	scanf("%f",&marks);
	if(marks>100)
	  printf("\nover smart");
	  	else if(marks>=80)
	  printf("\ndistinction");
	  else if(marks>=60)
	  printf("\nfirst class");
	  	else if(marks>=50)
	  printf("\nsecond class");
	       else if(marks>=40)
	  printf("\npass class");
	  else 
	   printf("\nfail");
	  
}
