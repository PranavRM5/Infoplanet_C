#include<stdio.h> 
float power (float, int);
int main()
{
	float x, z;
	int y;
	
	printf("\nEnter base and index ");
	scanf("%f%d",&x,&y); 
	
	z=power(x,y);
	printf("\n%.2f raise to %d =%.4f", x, y, z);
	return 0;
}

float power (float a, int b)
{
	 int i;
	 float p=1;
	 for(i=1; i<=b; i++)
	 {
	 	p=p*a;
	 }
	 return p;
}
