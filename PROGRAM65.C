#include <stdio.h>
#include<conio.h>
void add(int, int);
int main()
	{
		int x, y;
		clrscr();
	    printf("\nenter two number  ");
		scanf("%d%d", &x, &y);
		
	    add(x, y);
		getch();
	}
	void add(int a, int b)
	{
		int c;
		c =a+b;

		printf("\nsum = %d", c);
	}
