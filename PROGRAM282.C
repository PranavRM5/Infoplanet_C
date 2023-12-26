#include<stdio.h>
void main()
{
	int a[3][3], sum=0, i, j;
	printf("\nEnter 3X3 Matrix 1 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	printf("\nSum of matrix=%d",sum);
}
