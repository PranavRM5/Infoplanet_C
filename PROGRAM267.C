#include<stdio.h>
void main()
{
	int a[10], i, j, t;
	printf("\nEnter 10 number ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=9;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				         t=a[j];
			     	a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\Sorted array:-\n");
	for(i=0;i<10;i++)
	{
	  printf("%d\t",a[i]);
	}
}
