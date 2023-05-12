#include<stdio.h>
char findRank(float avg);
int main()
{
	float avg;
	char grade;
	
	printf("Enter Your Average Mark:");
	scanf("%f",&avg);
	
	grade=findRank(avg);
	
	printf("\nYour Rank is: %c\n\n",grade);
	
	return 0;
}
char findRank(float avg)
{
	char g;
	if(avg<=100 && avg>=90)
		g='A';
	else if(avg<90 && avg>=70)
		g='B';
	else if(avg<70 && avg>=50)
		g='C';
	else if(avg<50 && avg>=30)
		g='D';
	else if(avg<30 && avg>=0)
		g='F';
	return g;
}

