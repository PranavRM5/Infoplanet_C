#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n%d-Hello World\n ",i);
	    
	    if(i%2==0)
	    continue;
	    printf("\n%d-Good Bye\n ",i);
	}
}
