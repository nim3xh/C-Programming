#include<stdio.h>
int main()
{
	int cn;
	float u,p;
	
	printf("Enter the customer number:");
	scanf("%d",&cn);
	
	printf("Enter the power consumed:");
	scanf("%f",&u);
	
	if (u<=200)
	{
		p=u*0.50;
	}
	else if (u<=400)
	{
		p=(200*0.50)+(u-200)*0.65+100;
	}
	else
	{
		p=(200*0.50)+(200*0.65)+(u-600)*0.80+230;
	}
	
	printf("\nCustomer:%d	Payment:%.2f\n",cn,p);
	
	return 0;
}
	
