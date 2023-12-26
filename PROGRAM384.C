#include<stdio.h>
struct Test
{
	int x;
};
int main()
{
	struct Test t1={10}, t2;
	
	t2=t1;
	
	printf("\nt1.x=%d",t1.x);
	printf("\nt2.x=%d",t2.x);
	
	return 0;
}
