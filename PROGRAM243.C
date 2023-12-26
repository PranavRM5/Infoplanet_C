#include<stdio.h>
void main()
{
	int x=14, y=15;
	
	printf("\n\nbitwise AND=%d",x&y);
	
	printf("\n\nbitwise OR=%d",x|y);
	
	printf("\n\nbitwise XOR=%d",x^y);
	
	printf("\n\nbitwise COMPLEMENT=%d",~x);
	printf("\nbitwise COMPLEMENT=%d",~y);
	
	printf("\n\nbitwise LEFT SHIFT=%d",x<<2);
	printf("\nbitwise LEFT SHIFT=%d",y<<2);
	
	printf("\n\nbitwise RIGHT SHIFT=%d",x>>2);
	printf("\nbitwise RIGHT SHIFT=%d",y>>2);
	
}
