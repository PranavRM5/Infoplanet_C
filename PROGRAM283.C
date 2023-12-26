#include<stdio.h>
void main()
{
	int a[10], i, n;
	printf("\nEnter the number ");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		a[i]=n%16;
		i++;
		n=n/16;
	}
	i--;
	printf("\nHexa Decimail = ");
	while(i>=0)
	{
		switch(a[i])
		{
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
			default: printf("%d",a[i]); break;
		}
		i--;
	}
}
