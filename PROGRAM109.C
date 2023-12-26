#include<stdio.h>
int main()
{
	int a, b, c;
	printf("\nenter 3 ank");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("\n largest=%d",a);
	}
	else 
	
	{
		if(b>c)
		printf("\n largest=%d",b);
	}
          else
	printf("\n largest=%d",c);
}
