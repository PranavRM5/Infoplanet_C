#include<stdio.h>
void main()
{
	int i, n, sum=0;
	printf("\nEnter the number ");
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		    sum=sum+i;
	}

	if(sum==n)
    	printf("\n%d is perfect number ",n);
   else
	    printf("\n%d is not perfect number ",n);
}
