#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int rno;
	char name[30];
	float marks;
};
int main()
{
     typedef struct Student S;
    S s1, s2, s3;
    
	printf("\nEnter The Roll No ");
	scanf("%d",&s1.rno);
	printf("\nEnter Name ");
	scanf("%s",s1.name);
	printf("\nEnter Marks ");
	scanf("%f",&s1.marks);
	
	printf("\nEnter The Roll No ");
	scanf("%d",&s2.rno);
	printf("\nEnter Name ");
	scanf("%s",s2.name);
	printf("\nEnter Marks ");
	scanf("%f",&s2.marks);

    printf("\nEnter The Roll No ");
	scanf("%d",&s3.rno);
	printf("\nEnter Name ");
	scanf("%s",s3.name);
	printf("\nEnter Marks ");
	scanf("%f",&s3.marks);
	
	system("cls");
	
	printf("\nRoll No\tName\tMarks");
	printf("\n%d\t%s\t%f",s1.rno,s1.name,s1.marks);
	printf("\n%d\t%s\t%f",s2.rno,s2.name,s2.marks);
	printf("\n%d\t%s\t%f",s3.rno,s3.name,s3.marks);
	
	return 0;
}
