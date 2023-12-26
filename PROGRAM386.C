#include<stdio.h>
struct Student
{
	int rno;
	char name[30];
	float marks;
};
int main()
{
	typedef struct Student Student;
	Student s={10,"Pranav",99.99};
	Student *p;   //pointer to structure
	
	p=&s;
	
	printf("\nRoll No=%d",p->rno);
	printf("\nName   =%s",p->name);
	printf("\nMarks  =%0.2f",p->marks);
	
	return 0;
	
}
