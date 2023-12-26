#include<stdio.h> 
int main()
{
	int a = 10 , b = 30 , c=40, d = 50, e = 20 , i;
	int *p[5]; //Array of pointer

     p[0]=&a;
     p[1]=&b;
     p[2]=&c;
     p[3]=&d;
     p[4]=&e;

     for(i=0;i<5;i++)
     {
     	printf("%d\t", *p[i]);
     }
     return 0;
}
