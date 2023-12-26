#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10], i, p=0, n=0, even=0, odd=0;
	printf("Enter 10 Number ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	fflush(stdin);
	for(i=0;i<10;i++)
	{
		if(a[i]>=0)
		p++;
		else
		n++;
		
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("\ncount of Positive   = %d ",p);
	printf("\ncount of Negative = %d ",n);
	printf("\ncount of Even = %d ",even);
	printf("\ncount of odd   = %d ",odd);
}
