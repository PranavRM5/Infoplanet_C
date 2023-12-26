#include<stdio.h>
int main()
{
	int a[10], sum=0, i;
	float avg;
	
	printf("\nEnter ten no ");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<=9;i++)
	sum=sum+a[i];
	
	printf("\nsum%d",sum);
	
	avg=sum/10.0;
	
	printf("\naverage=%f",avg);
	
}
