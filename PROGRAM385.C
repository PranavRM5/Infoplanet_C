#include<stdio.h>
struct Test
{
	int x;
};
int main()
{
	struct Test t1={200}, t2={20}, t3;
	
	t3.x=t1.x+t2.x;
	
	printf("\nt1.x=%d",t1.x);
	printf("\nt2.x=%d",t2.x);
	printf("\nt3.x=%d",t3.x);
	
	return 0;
}
