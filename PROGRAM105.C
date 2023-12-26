#include<stdio.h>
void main()
{
	int a, b, c;
	printf("\nEnter three integer");
	scanf("%d%d%d",&a, &b, &c);
    	if(a>b)
	    printf("\nlargest=%d",a);
		else if(b>c)
		printf("\nlargest=%d",b);
		else if(c>a)
		printf("\nlargest=%d",c);
}
