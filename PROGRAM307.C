#include<stdio.h> 
int factorial (int);
int main()
{
int x, y;
printf("\nEnter the number");
scanf("%d",&x);
y=factorial (x); printf("\n%d! =%d",x,y);
return 0;
}

int factorial(int n)
{
  int i,f=1;
for(i=1; i<=n; i++)
{
     f=f*i;
}
     return f;
}
