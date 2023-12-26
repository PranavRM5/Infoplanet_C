#include <stdio.h>
int main()
	{
		void add(void);
		add();
	}
	void add()
	{
		int a, b, c;
		printf("\nenter two number  ");
		scanf("%d%d", &a, &b);

		c = a + b;

		printf("\nsum = %d", c);
	}
