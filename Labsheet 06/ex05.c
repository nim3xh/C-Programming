#include<stdio.h>
int main()
{
	float a,b,c,d,e,avg;
	char grade;
	
	printf("Enter marks for 5 subjects\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	
	avg=(a+b+c+d+e)/5;
	
	if (avg<30)
	{
	grade='F';
	}
	else if (avg<40)
	{
	grade='E';
	}
	else if (avg<50)
	{
	grade='D';
	}
	else if (avg<70)
	{
	grade='C';
	}
	else if (avg<80)
	{
	grade='B';
	}
	else
	{
	grade='A';
	}
	
	printf("presentage:%.2f\nGrade:%c\n",avg,grade);
	
	return 0;
}
