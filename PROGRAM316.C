#include<stdio.h>
int isArmstrong(int);
int main()
{
	int x;
	printf("\nEnter the number ");
	scanf("%d",&x);

	if(isArmstrong(x))
	printf("\n%d is Armstrong ",x);
	else
	printf("\n%d is not Armstrong",x);
	
    return 0;
}
int isArmstrong(int n)
{
	int sum=0, r, m;
	m=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(m==sum)
	return 1;
	else
	return 0;
}
