#include <stdio.h>
#include<conio.h>
int add(void);
int main()
	{
		int s;
		clrscr();
		s=add();
		printf("\nsum of %d",s);
		getch();
	}
int add()
	{
		int a, b, c;
		printf("\nenter a number    ");
		scanf("%d%d", &a, &b);
		c=a+b;
		return c;
	}
