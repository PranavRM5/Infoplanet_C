#include<stdio.h>
int isPalindrome(int);
int main()
{
	int x;
	printf("\nEnter the number ");
	scanf("%d",&x);

	if(isPalindrome(x))
	printf("\n%d is Palindrome",x);
	else
	printf("\n%d is not Palindrome",x);
	
    return 0;
}
int isPalindrome(int n)
{
	int sum=0, r, m, rev=0;
	m=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(m==rev)
	return 1;
	else
	return 0;
}
