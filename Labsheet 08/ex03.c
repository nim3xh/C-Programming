#include<stdio.h>
float calcCost(float price);
int main()
{
	float amount,price;
	char p;
	
	printf("\nProduct A - Rs.50.00\nProduct B - Rs.100.00\nProduct C - Rs.70.00\nProduct D - Rs.180.00\n");
	
	printf("\nWhich Product:");
	scanf("%c",&p);
	
	switch(p)
	{
		case 'A':
		case 'a':
			price=50;
			break;
		case 'B':
		case 'b':
			price=100;
			break;
		case 'C':
		case 'c':
			price=70;
			break;
		case 'D':
		case 'd':
			price=180;
			break;
	}
	amount=calcCost(price);
	printf("\nTotal cost:Rs.%.2lf\n",amount);
	return 0;
}
float calcCost(float price)
{
	float n;
	
	printf("Enter the number of units you have bought:");
	scanf("%f",&n);
	return n*price;
}	
