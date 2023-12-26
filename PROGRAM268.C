#include<stdio.h>
void main()
{
	int a[10], i, j, m;
	printf("\nEnter 10 number ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
    m=a[0];
    for(i=1;i<10;i++)
    {
    	if(a[i]>m)
    	m=a[i];
    }
    printf("\nLargest=%d",m);
}
