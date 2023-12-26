#include<stdio.h>
int main()
{
	int i=1, j=1;
	if(i<=5)
	goto o;
	i++;
	o:
    {
		n:
		printf("*");
		printf("\n");
		j++;
   	if(j<=i)
	   goto n;
	   
    }
}
