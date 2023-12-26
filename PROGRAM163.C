#include<stdio.h>
void main()
{
	int i, n;
	printf("\nEnter the number ");
	scanf("%d",&n);
	printf("\nFactor of %d are = ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
	}
}
