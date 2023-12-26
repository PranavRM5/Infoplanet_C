#include<stdio.h>
void main()
{
	char i=1, j=1;
	if(i!=5)
	goto ok;
	ok:
	{
	    no:
	    {	
		printf("*");
		printf("\n");
	    }
       if(i!=j)
   	goto no;
   	i++;
	}
}
