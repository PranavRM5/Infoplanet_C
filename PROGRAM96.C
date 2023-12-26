#include<stdio.h>
int main()
{
	int age;
	printf("\nenter your age ");
	scanf("%d",&age);
	
	if(age<18)
	 printf("\nChild");
	else if(age<65)
	 printf("\nAdult");
	else if(age<120)
	 printf("\nSenior Citizen ");
	 
	else
	  printf("\ninvalid input");
}
