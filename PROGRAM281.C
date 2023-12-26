#include<stdio.h>
void main()
{
	int a[3][3], i, j;
	printf("\nEnter 3X3 Matrix 1 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\ntranspose 3X3 Matrix \n");
     for(j=0;j<3;j++)
	{
			for(i=0;i<3;i++)
    	{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
