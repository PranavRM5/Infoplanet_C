#include<stdio.h>
void main()
{
	int a[10], i, m;
	printf("\nenter 10 integer ");
	for(i=0;i<10;i++)
	{
     	scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=1;i<=9;i++)
	{
		if(a[i]<m)
		m=a[i];
	}
	printf("\nsmallest=%d",m);
}
