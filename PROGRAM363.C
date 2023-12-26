#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a;
	int i, j, r, c;
	printf("\nHow many rows ");
	scanf("%d",&r);
	printf("\nHow many columns ");
	scanf("%d",&c);
		a=(int *)malloc(r*sizeof(int));
		for(i=0;i<r;i++)
		{
			a[i]=(int*)malloc(c*sizeof(int));
		}	
		
		printf("\nEnter %dX%d matrix",r,c);
		for(i=0;i<r;i++)
	    {
	    	for(j=0;j<c;j++)
	    	scanf("%d",&a[i][j]);
	    } 
	    printf("\nEnter %dX%d matrix",r,c);
	    for(i=0;i<r;i++)
	    {
	    	printf("\n");
	    	for(j=0;j<c;j++)
	    	printf("%d\t",a[i][j]);
	    }
	    for(i=0;i<r;i++)
	    {
	    	free (a[i]); //deallocation of row
	    }
	    free(a);       //deallocation of array of pointer
	    return 0;
}
