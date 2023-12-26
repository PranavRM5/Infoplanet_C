#include<stdio.h>
void main()
{
	int a[3][3], b[3][3], c[3][3]={0}, i, j, k;
	printf("\nEnter 3X3 Matrix 1 ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter 3X3 Matrix 2 ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMultiplication matrix is ");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("\nMultiplication matrix is ");
    for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		    printf("%d\t",c[i][j]);
		}
	}
}
