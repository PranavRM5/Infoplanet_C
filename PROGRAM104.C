#include<stdio.h>
void main()
{
	int a1, a2 ,a3, a4;
	printf("\nEnter four integer");
	scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
	if(a1<a2&&a1<a3&&a1<a4)
	   printf("\nsmallest=%d",a1);
	else if(a2<a3&&a2<a4)
	   printf("\nsmallest=%d",a2);
	else if(a3<a4)
	   printf("\nsmallest=%d",a3);
	else
	   printf("\nsmallest=%d",a4);
}
