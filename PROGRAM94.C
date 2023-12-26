#include<stdio.h>
int main()
{
	char gender;
	float balance, bonus;
	
	printf("\nEnter Gender(M/F) = ");
	scanf(" %c",&gender);
	printf("\nEnter Balance = ");
	scanf("%f",&balance);
	if(gender=='F')
	{
		if(balance>5000)
		   bonus= balance*0.05;
		else
		   bonus=balance*0.02;
	}
	else
	    bonus=balance*0.02;
	 printf("\nBonus=%0.2f",bonus);
}
