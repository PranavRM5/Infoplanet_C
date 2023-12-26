#include<stdio.h>
int main()
{
	int i=1, j=1;
	if(i<=5)
	goto ok;
	 if(j<=i)
	 goto no;
	ok:
    {
    	j++;
		no:
		{
			printf("*");
			i++;
		}
		printf("\n\n");
	  
	}	
}
