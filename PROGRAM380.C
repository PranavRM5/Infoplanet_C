#include<stdio.h>
#include<stdlib.h>
struct Employees
{
	int Emp_id;
	char name[30];
	int age;
	char gender;
	float salary;
};
int main()
{
	struct Employees e[10];
	int i;
	for(i=0;i<10;i++)
	{
	printf("\nEnter Emp. id. Emp %d ",i+1);
	scanf("%d",&e[i].Emp_id);
	printf("\nEnter Name. Emp %d ",i+1);
	scanf("%s",e[i].name);
	printf("\nEnter age Emp %d ",i+1);
	scanf("%d",&e[i].age);
	printf("\nEnter gender Emp %d ",i+1);
	scanf("  %c",&e[i].gender);
	printf("\nEnter Salary Emp %d ",i+1);
	scanf("%f",&e[i].salary);	
	}			

    system("cls");
	
	printf("\nEmp. ID.\tName\tAge\tGender\tSalary\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d\t\t%s\t%d\t%c\t%f",e[i].Emp_id,e[i].name,e[i].age,e[i].gender,e[i].salary);
	}
	
     return 0;
}
