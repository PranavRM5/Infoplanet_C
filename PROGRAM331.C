#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE], i;
	printf("\nEnter %d number ",SIZE);
	for(i=1;i<=SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray is \n");
	for(i=1;i<=SIZE;i++)
	{
		printf("%d\n",a[i]);
	}
}
