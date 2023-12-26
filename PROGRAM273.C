#include<stdio.h>
void main()
{
	int a[3][3], i, j, mult=0  ;
	printf("\nEnter a number ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			mult=mult+a[i][j]*a[i][j];
		}
	}
	
	        printf("result=%d\t",mult);
}
