//Example 2
#include<stdio.h>
typedef enum{sun,mon,tue,wed,thu,fri,sat}weekday;//use of typedef to name weekday
int main()
{
	weekday x[3]={mon, wed, sat};  //no need of enum in declaration now(typedef)
	int i;
	for(i=0;i<3;i++)
	{
	       printf("%d\t",x[i]);
	 }    
	       return 0;
}
