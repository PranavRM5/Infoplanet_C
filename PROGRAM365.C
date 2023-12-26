#include<stdio.h>
int main()
{
	int a[3]={10,20,30}, b[3]={40,50,60}, c[3]={70,80,90};
    int i,j;
    int *p[3]={a,b,c}; //Array of pointer
    for(i=0;i<3;i++)
    {
    	printf("\n"); 
    	for(j=0;j<3;j++) 
    	printf("%d\t",p[i][j]);
    	}
    	return 0;
 }
