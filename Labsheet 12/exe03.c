#include<stdio.h>

typedef struct employee{
 char name[50];
 char position[50];
 char gender;
 int empno;
 float salary;
}emp;

void main()
{
 emp emp_data={"Sanath Kumara","Clerk",'M',1028,55000.00};
 printf("Employee details");
 printf("\nName : %s\nPosition : %s\nGender : %c\nEmployee No:%d\nSalary:%.2f\n",emp_data.name,emp_data.position,emp_data.gender,emp_data.empno,emp_data.salary);
 
}
