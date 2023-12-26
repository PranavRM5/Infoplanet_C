#include<stdio.h>
int main()
{
	int x, y, z, sum;
	float avg;
	printf("\nEnter three numbers  ");
	scanf("%d%d%d",&x,&y,&z);
	sum = x+y+z;
	avg = sum/3.0;
	printf("\nSum = %d",sum);
	printf("\nAverage = %f",avg);
}
