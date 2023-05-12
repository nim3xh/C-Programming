#include<stdio.h>
int main()
{
	int age;
	float height;
	
	printf("Please enter your age:");
	scanf("%d",&age);
	
	printf("Please enter your height:");
	scanf("%f",&height);
	
	if (age>18 && height>=5)
	{
		printf("Candidate is selected\n");
	}
	else
	{
		printf("not selected\n");
	}
	
	return 0;
}
