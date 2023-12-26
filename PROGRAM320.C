#include<stdio.h>
int Power(int, int);
int main()
{
	int x, z;
	int y;
	printf("\nEnter the base & index ");
	scanf("%d%d",&x,&y);
	z= Power(x,y);
	printf("%d raise to %d = %d",x,y,z);
	return 0;
}
int Power(int m,int n)
{
	int p;
	if(n==1)
	return m;
	
	p=m*Power(m,n-1);
	return p;
}
