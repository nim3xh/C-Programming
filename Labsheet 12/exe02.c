#include<stdio.h>
#include<stdlib.h>

struct student{
 int stdno;
 char name[20];
 char address[25];
 int age;
 char degree[25];
 };
 
int main()
{
	struct student student1;
	
	printf("Enter Student No:");
	scanf("%d",&student1.stdno);
	
	printf("Enter Student Name:");
	scanf("%s",student1.name);
	
	printf("Enter Student Address:");
	scanf("%s",student1.address);
	
	printf("Enter Student Age:");
	scanf("%d",&student1.age);
	
	printf("Enter Student Degree:");
	scanf("%s",student1.degree);
	
	printf("\nStudent No : %d",student1.stdno);
	printf("\nStudent Name : %s",student1.name);
	printf("\nStudent address : %s",student1.address);
	printf("\nStudent Age : %d",student1.age);
	printf("\nStudent Degree : %s\n",student1.degree);
	
 return 0;	
}
