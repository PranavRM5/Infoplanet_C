#include<stdio.h>
int main()
{
	int a[3][3], i, j;
	int sum=0;
	printf("\nEnter a number ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]==a[j])
			{
          	scanf("%d",&a[i][j]);
		      sum=sum+a[i][j];
			}
		}
	}	     
	      printf("result=%d",sum);
}
