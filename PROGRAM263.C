#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10], i, j, c=0;
	printf("Enter 10 Number ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	fflush(stdin);
	for(i=0;i<10;i++)
	{
	  for(j=2;j<a[i];j++)
	{
		
		if(a[i]%j==0)
		break;
	}
	if(a[i]==j)
	printf("\nprime=%d",j);
	c++;	
	}
	//printf("\nCount of Prime number = %d ",c);
	
	
}
