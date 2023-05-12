#include<stdio.h>
#include<stdlib.h>

typedef struct
{
 int Reg_id;
 char R_category;
 int Days;
}customer;

void getCusData(customer CusList[]);
void menu(customer CusList[]);
void display(customer CusList[]);
float totalCharges(customer CusList[]);

int main()
{
	customer CusList[20];

	getCusData(CusList);

	menu(CusList);

	return 0;
}

void getCusData(customer CusList[])
{
	int i;
	printf("------------------------------------------\n");
	printf("  Customer Information Management System  \n");
	printf("------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Customerc id:\n");
		scanf("%d",&CusList[i].Reg_id);

		printf("Enter Room Category:\n");
		scanf(" %c",&CusList[i].R_category);

		printf("Enter Number of Days:\n");
		scanf("%d",&CusList[i].Days);
	}
}

void menu(customer CusList[])
{
	do{
	int i;
	printf("------------------------------------------\n");
	printf("What do you want to do?Enter your preference...\n");
	printf("\t1. Display All Customer Information\n");
	printf("\t2. Display Total Charges\n");
	printf("\t3. Exit\n");
	printf("Enter Your Choice:");
	scanf("%d",&i);
	printf("------------------------------------------\n");
	
	switch(i)
	{
		case 1:
			display(CusList);
			break;
		case 2:
			totalCharges(CusList);
			break;
		case 3:
			exit(1);
			break;
	}
	}while(1);
}

void display(customer CusList[])
{
	int i;
	printf("------------------------------------------\n");
	printf("*****Display Customer Information*****\n");
	for(i=0;i<5;i++)
	{
		printf("Customer ID: %d\n",CusList[i].Reg_id);

		printf("Room Category: %c\n",CusList[i].R_category);

		printf("Number of days: %d\n",CusList[i].Days);
	}	
}

float totalCharges(customer CusList[])
{
	printf("-------------------------\n");
	printf("*****Display Charges*****\n");
	int i;
	printf("Enter Customer id:");
	scanf("%d",&i);
	int n;
	float charge;
	for(n=0;n<5;n++)
	{
		if(i==CusList[n].Reg_id)
		{
			switch(CusList[n].R_category)
			{
				case 'S':
					charge=CusList[n].Days*5000;
					break;
				case 'D':
					charge=CusList[n].Days*10000;
					break;
				case 'T':
					charge=CusList[n].Days*18000;
					break;
				default:
					printf("Enter Valid Customer Id\n");
					break;	
			}
			
		}
	}
	printf("Total charges: %.2f\n",charge);	
	printf("------------------------------------------\n");
}
