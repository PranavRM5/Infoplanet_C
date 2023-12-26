//Example 1
#include<stdio.h>
typedef enum{sun,mon,tue,wed,thu,fri,sat}weekday;
int main()
{
	weekday x[3]={mon, wed, sat};
	int i;
	for(i=0;i<3;i++)
	{
	       printf("%d\t",x[i]);
	 }    
	       return 0;
}
