#include<stdio.h>
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
	struct Employees E1, E2, E3;
	printf("\nEnter Emp. id. E1 ");
	scanf("%d",&E1.Emp_id);
	printf("\nEnter Name. E1 ");
	scanf("%s",E1.name);
	printf("\nEnter age E1");
	scanf("%d",&E1.age);
	printf("\nEnter gender E1");
	scanf("  %c",&E1.gender);
	printf("\nEnter Salary E1");
	scanf("%f",&E1.salary);		

	printf("\nEnter Emp. id. E2 ");
	scanf("%d",&E2.Emp_id);
	printf("\nEnter Name. E2 ");
	scanf("%s",E2.name);
	printf("\nEnter age E2");
	scanf("%d",&E2.age);
	printf("\nEnter gender E2 ");
	scanf("  %c",&E2.gender);
	printf("\nEnter Salary E2");
	scanf("%f",&E2.salary);		

    printf("\nEnter Emp. id. E3 ");
	scanf("%d",&E3.Emp_id);
	printf("\nEnter Name. E3 ");
	scanf("%s",E3.name);
	printf("\nEnter age E3");
	scanf("%d",&E3.age);
	printf("\nEnter gender (M/F) E3");
	scanf("  %c",&E3.gender);
	printf("\nEnter Salary E3");
	scanf("%f",&E3.salary);		

	
	printf("\nEmp. ID.\tName\tAge\tGender\tSalary\n");
	printf("\n%d\t\t%s\t%d\t%c\t%f",E1.Emp_id,E1.name,E1.age,E1.gender,E1.salary);
	printf("\n%d\t\t%s\t%d\t%c\t%f",E2.Emp_id,E2.name,E2.age,E2.gender,E2.salary);
	printf("\n%d\t\t%s\t%d\t%c\t%f",E3.Emp_id,E3.name,E3.age,E3.gender,E3.salary);
}
