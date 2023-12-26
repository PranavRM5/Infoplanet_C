#include<stdio.h>
void main()
{
	int a[10], i, n;
	printf("enter a number ");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		a[i]=n%8;
		i++;
		n=n/8;
	}
	i--;
	printf("Octal=");
	while(i>=0)
	{
		printf("%d",a[i]);
		i--;
	}
}
