/Palindrome Number/
#include<stdio.h>
void main()
{
	int n, r, t, rev=0;
	printf("\nEnter the number ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
	   r=n%10;
	   rev=rev*10+r;
	   n=n/10;
	}
	printf("\nReverse = %d ",rev);
	
    if(t==rev)
        printf("\n %d is palindrome number ",t);
    else
        printf("\n %d is not palindrome number ",t);
}
