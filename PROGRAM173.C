#include<stdio.h>
void main()
{
	int y;
	printf("\n enter year ");
	scanf("%d",&y);
    	if(y%4==0)
    	{
    		if(y%100==0)
	    	printf("\n %d leaf",y);
	        else
	  	      	if(y%400==0)
                	printf("\n %d leaf",y);
	           	else
		            printf("\n %d not leaf",y);
	}

}
