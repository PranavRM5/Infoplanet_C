#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
	int A=(int)a;
	int B=(int)b;
	return A-B;
}
int main()
{
	int arr[5]={4,7,5,3,2}; 
	int i;
	
	qsort(arr,5,sizeof(int),compare);
	
	printf("\nSorted Array\n"); 
	for(i=0;i<5;i++) 
	printf("%d\t",arr[i]);
	
	return 0;
}
