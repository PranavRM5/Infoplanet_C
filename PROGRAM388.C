//Example 1
#include<stdio.h>
enum color{red=10, green=20, blue};
int main()
{
	enum color x[3]={red,green,blue};
	int i;
	for(i=0;i<3;i++)
	{
	       printf("%d\t",x[i]);
	 }    
	       return 0;
}
