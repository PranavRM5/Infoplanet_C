#include<stdio.h>
int main()
{
	int x,y,mini;
	printf("\nEnter a number ");
	scanf("%d%d",&x,&y);
	mini=x<y?x:y;
    printf("\nsmaller value =%d",mini);
}
