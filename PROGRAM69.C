#include <stdio.h>
#include<conio.h>
int add(int, int);
int main()
	{
		int x, y, s;
		clrscr();
		printf("\nenter a number  ");
		scanf("%d%d",&x, &y);
		s=add(x,y);
		printf("\nsum is %d",s);
		getch();
	}
	int add(int a, int b)
	{
		int c;
		c=a+b;
		return c;
	}
