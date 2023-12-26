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
	void add(int f, int g)
	{
		int c;
		c =f+g;

		printf("\nsum = %d", c);
	}
