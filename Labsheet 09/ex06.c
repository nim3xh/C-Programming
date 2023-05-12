#include<stdio.h>

float readMarks(float Marks[10]);
float printMarks(float Marks[10]);
float TotalMarks(float Marks[10]);

int main()
{
	float Marks[10];
	
	readMarks(Marks);
	printMarks(Marks);
	float sum=TotalMarks(Marks);
	printf("Total Marks : %0.2f\n", sum);
	return 0;
}

float readMarks(float Marks[10])
{
int i;
	for(i=0;i<10;i++)
	{
		printf("Enter Marks number %d: ",i+1);
		scanf("%f",&Marks[i]);
	}
	return 0;
}

float printMarks(float Marks[10])
{
	int i;
	printf("\n\n-----Display Student marks-----\n\n");
	for(i=0;i<10;i++)
	{
		printf("Marks %d : %.2f\n",i,Marks[i]);
	}
	return 0;
}

float TotalMarks(float Marks[10])
{
int i;
float tot=0;
	printf("\n-----Total marks-----\n\n");
	for(i=0;i<10;i++)
	{
		tot+=Marks[i];
	}
	return tot;
}
