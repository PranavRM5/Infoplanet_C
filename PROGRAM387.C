#include<stdio.h>
typedef struct   
{
	int rno;
	char name[30];
	float marks;
}Student;     //structure variable name 
void display(Student);  //function declaration
void setScore(Student*,float);
int main()
{
	Student s={10,"Pranav",99.99};
	
	display(s);  //call by value
	
	setScore(&s,99.99); //call by reference
    
    printf("\n");
    display(s);
    
    return 0;
}

void display(Student a)
{
	printf("\nRoll No=%d",a.rno);
	printf("\nName   =%s",a.name);
	printf("\nMarks  =%.2f",a.marks);
	
}

void setScore(Student *a, float m)
{
	a->marks=m;   //(*a).marks
}
