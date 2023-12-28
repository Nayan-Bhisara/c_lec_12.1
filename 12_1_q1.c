/*
Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include<stdio.h>
#include<string.h>

struct srs{
	
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int standard;
	char school[30]

};

void main(){
	
	struct srs s1;
	struct srs s2;
	struct srs s3;
	
	printf(" ........... Enter Student 1 info ...........\n");
	printf("Student Id : ");
	scanf("%d",&s1.id);
	printf("Student Name : ");
	scanf("%s",&s1.name);
	printf("Student Age : ");
	scanf("%d",&s1.age);
	printf("Student Course : ");
	scanf("%s",s1.course);
	printf("Student City : ");
	scanf("%s",s1.city);
	printf("Student Standard : ");
	scanf("%d",&s1.standard);
	printf("Student School : ");
	scanf("%s",s1.school);

	printf("\nThe ID of Student 1 is : %d",s1.id);
	printf("\nThe Name of Student 1 is : %s",s1.name);
	printf("\nThe Age of Student 1 is : %d",s1.age);
	printf("\nThe Course of Student 1 is : %s",s1.course);
	printf("\nThe City of Student 1 is : %s",s1.city);
	printf("\nThe Standard of Student 1 is : %d",s1.standard);
	printf("\nThe School of Student 1 is : %s\n\n",s1.school);
	
	printf(" ........... Enter Student 2 info ........... \n");
	printf("Student Id : ");
	scanf("%d",&s2.id);
	printf("Student Name : ");
	scanf("%s",&s2.name);
	printf("Student Age : ");
	scanf("%d",&s2.age);
	printf("Student Course : ");
	scanf("%s",s2.course);
	printf("Student City : ");
	scanf("%s",s2.city);
	printf("Student Standard : ");
	scanf("%d",&s2.standard);
	printf("Student School : ");
	scanf("%s",s2.school);

	printf("\nThe ID of Student 2 is : %d",s2.id);
	printf("\nThe Name of Student 2 is : %s",s2.name);
	printf("\nThe Age of Student 2 is : %d",s2.age);
	printf("\nThe Course of Student 2 is : %s",s2.course);
	printf("\nThe City of Student 2 is : %s",s2.city);
	printf("\nThe Standard of Student 2 is : %d",s2.standard);
	printf("\nThe School of Student 2 is : %s\n\n",s2.school);
	
	printf(" ........... Enter Student 3 info ........... \n");
	printf("Student Id : ");
	scanf("%d",&s3.id);
	printf("Student Name : ");
	scanf("%s",&s3.name);
	printf("Student Age : ");
	scanf("%d",&s3.age);
	printf("Student Course : ");
	scanf("%s",s3.course);
	printf("Student City : ");
	scanf("%s",s3.city);
	printf("Student Standard : ");
	scanf("%d",&s3.standard);
	printf("Student School : ");
	scanf("%s",s3.school);

	printf("\nThe ID of Student 3 is : %d",s3.id);
	printf("\nThe Name of Student 3 is : %s",s3.name);
	printf("\nThe Age of Student 3 is : %d",s3.age);
	printf("\nThe Course of Student 3 is : %s",s3.course);
	printf("\nThe City of Student 3 is : %s",s3.city);
	printf("\nThe Standard of Student 3 is : %d",s3.standard);
	printf("\nThe School of Student 3 is : %s",s3.school);

}
