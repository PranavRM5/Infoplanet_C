//dynamic memory allocation to create array of structure
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
	struct Student *s; //pointer to structure
	int i, n;
	
    
	
	printf("\nHow many Student ?\n");
	scanf("%d",&n);
	
	s=(struct Student*)malloc(n*sizeof(struct Student));
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Roll No, Name, Marks\n");
		scanf("%d%s%f",&s[i].rno,s[i].name,&s[i].marks);
	}
	
	printf("\nRoll No\tName\tMarks\n");
	
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%.2f",s[i].rno,s[i].name,s[i].marks);
	}
	free(s);
	
	return 0;
}
