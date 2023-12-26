#include<stdio.h>
int main()
{
	int x,y,max;
	printf("\nEnter a number ");
	scanf("%d%d",&x,&y);
	max=x>y?x:y;
    printf("\ngreater value =%d",max);
}
