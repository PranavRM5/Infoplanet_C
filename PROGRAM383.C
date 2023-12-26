#include<stdio.h>
struct Test
{
	int x;
};
int main()
{
	struct Test t1={10}, t2;
	
	t2=t1;
	
	printf("\nt1=%d",t1);
	printf("\nt2=%d",t2);
}

