#include<stdio.h>
void main()
{
	int a[10], i, n;
	printf("\nEnter the number ");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
	}
	i--;
	printf("\nIn Word = ");
	while(i>=0)
	{
		switch(a[i])
		{
			case 0: printf("Zero"); break;
			case 1: printf("One "); break;
			case 2: printf("Two "); break;
			case 3: printf("Three "); break;
			case 4: printf("Four "); break;
			case 5: printf("Five "); break;
			case 6: printf("Six "); break;
			case 7: printf("Seven "); break;
			case 8: printf("Eight "); break;
			case 9: printf("Nine"); break;
	
		}
		i--;
	}
}
