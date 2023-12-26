#include<stdio.h>
void main()
{
	int y;
	printf("\nenter thr year  ");
	scanf("%d",&y);
	if(y%4==0 || y%100!=0)
	printf("\n %d is leap year ",y);
	else if(y%400==0)
	printf("\n %d is leap year ",y);
	else
	printf("\n %d is not leap year ",y);
}
