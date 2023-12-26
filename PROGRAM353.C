#include<stdio.h>
 int main()
{
	short int a[5] = {10,20,30,40,50}; 
	int i;
	
     printf("\nBase address = %u", a);
     for(i=0;i<5;i++)
     {
      printf("\n%d\t%u", a[i],a+i);
	 }
	 return 0;
}
