#include<stdio.h>
#include<stdlib.h>
struct Employees
{
	int Emp_id;
	char name[30];
	int age;
	char gender;
	float salary;
}Emp;
typedef struct Employees employee; //using the typedef keyword
int main()
{
	employee Emp[10];    //apply typedef keyword
	int i;
	for(i=0;i<10;i++)
	{
	printf("\nEnter Emp. id. Emp %d ",i+1);
	scanf("%d",&Emp[i].Emp_id);
	printf("\nEnter Name. Emp %d ",i+1);
	scanf("%s",Emp[i].name);
	printf("\nEnter age Emp %d ",i+1);
	scanf("%d",&Emp[i].age);
	printf("\nEnter gender Emp %d ",i+1);
	scanf("  %c",&Emp[i].gender);
	printf("\nEnter Salary Emp %d ",i+1);
	scanf("%f",&Emp[i].salary);	
	}			

    system("cls");
	
	printf("\nEmp. ID.\tName\tAge\tGender\tSalary\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d\t\t%s\t%d\t%c\t%f",Emp[i].Emp_id,Emp[i].name,Emp[i].age,Emp[i].gender,Emp[i].salary);
	}
	
     return 0;
}
