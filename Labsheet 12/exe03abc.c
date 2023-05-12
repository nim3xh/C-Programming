#include<stdio.h>
#include<string.h>
typedef struct employee{
 char name[50];
 char position[50];
 char gender;
 int empno;
 float salary;
}emp;

void main()
{
 emp details[5];
 for(int i=0;i<6;i++)
 {
 	
 	
 	printf("Enter Employee %d details\n",i+1);
 	
 	printf("Enter Name:");
 	scanf("%s",details[i].name);
 	
 	printf("Enter Position:");
 	scanf("%s",details[i].position);
 	
 	printf("Enter Gender:");
 	scanf(" %c",&details[i].gender);
 	
 	printf("Enter Employee No:");
 	scanf("%d",&details[i].empno);
 	
 	printf("Enter Salary:");
 	scanf("%f",&details[i].salary);
 }
 for(int i=0;i<6;i++)
 {
 	printf("\n-------------------------\n");
 	printf("Employee %d details\n",i+1);
 	printf("\nName : %s",details[i].name);
 	printf("\nPosition : %s",details[i].position);
 	printf("\nGender : %c",details[i].gender);
 	printf("\nEmployee No:%d",details[i].empno);
 	printf("\nSalary:%.2f\n",details[i].salary);
 }
 printf("\nEmployees who has salary greater than Rs.25000.00\n");
 for(int i=0;i<6;i++)
 {
 	if(details[i].salary>25000)
 	{
 	printf("\n0%d Name : %s",i,details[i].name);
 	}
 }
 int j=0;
 for(int i=0;i<6;i++)
 {
 	if(strcmp(details[i].position,"clerk")==0)
 	{
 		j++;
 	}
 }
 printf("\n\nNumber of Clerks : %d\n",j);
 
 
 
}
