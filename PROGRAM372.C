#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a, i, n;
	printf("\nHow many integers ? ");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter %d number ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
		printf("\nArray is\n ",n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
}
