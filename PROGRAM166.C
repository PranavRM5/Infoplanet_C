#include<stdio.h>
int main()
{
	int i, j, x, y, sum=0;
	printf("\nEnter first number ");
	scanf("%d%d",&x,&y);
	printf("\n factor of %d are \n",x);
	for(i=1; i<x; i++)
	   {
		if(x%i==0)
		printf("%d\t",i);
	    }
	    printf("\n factor of %d are \n",y);
	for(j=1; j<y; j++)
  	{
		if(y%j==0)
		printf("%d\t",j);
  	 }
  	 printf("\nG.C.D(HCF)=%d",i);
  	 {
  	      if(i==j)
  	      printf("\n%d",i);
	}	
	    
}
