#include<stdio.h>
int main()
{
	int pcm, cet;
	printf("\nEnter Your PCM mark = ");
	scanf("%d",&pcm);
	if(pcm>=150)
	{
		if(cet>=100)
		   printf("\n eligible");
		 else
		    printf("\n not eligible");
	}
	else
	{
		printf("\n not eligible");
	}
}
