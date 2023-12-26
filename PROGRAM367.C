#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]) //command line parameter
{
	int x, y, sum;
	if(argc==3)
	{
		x=atoi(argv[1]);
		y=atoi(argv[2]);
		sum=x+y;
		
		printf("\nAddition=%d",sum);
	}
	else
	    printf("\nProvide 2 numbers ");
	return 0;
}
