#include<stdio.h>
int main()
{
	float B1,B2,B3,For_Day,For_Week,For_Sem;
	
	printf("Enter fare of first bus:");
	scanf("%f",&B1);
	printf("Enter fare of second bus:");
	scanf("%f",&B2);
	printf("Enter fare of third bus:");
	scanf("%f",&B3);
	
	For_Day=2*(B1+B2+B3);
	For_Week=5*For_Day;
	For_Sem=For_Week*15;
	
	printf("Expenditure of the student:%.2f",For_Sem);
	
	return 0;

	
}
