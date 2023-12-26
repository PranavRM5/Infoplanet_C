#include<stdio.h>
#define fun(x) (x*x-x)
int main()
{
	float i;
	i=37.0/fun(2);
	printf("%.2f",i);
	return 0;
}
