#include<stdio.h>
float GetTotalPrice(char bookType, int qty);
float getDiscount (float Tprice);
int main()
{
	int qty; //for quantity
	char bookType; //for type
	float Tprice,Discount;
	
	printf("Book Type         Price per unit\n");
	printf("---------         --------------\n");
	printf("Single rule-s	   Rs 35.00\n");
	printf("Double rule-d	   Rs 40.00\n");
	printf("Square rule-q	   Rs 45.00\n\n");
	
	printf("Enter book type:");
	scanf("%c",&bookType);
	
	printf("Enter Quantity:");
	scanf("%d",&qty);
	
	Tprice=GetTotalPrice(bookType,qty);
	Discount=getDiscount (Tprice);
	
	printf("\n\nAmount          : Rs %.2f\n",Tprice);
	printf("Discount        : Rs %.2f\n",Discount);
	printf("Net amount      : Rs %.2f\n",Tprice-Discount);
	
	return 0;
}

float GetTotalPrice(char bookType,int qty)
{
	float Tprice;
	
	switch(bookType)
	{
	case 's':
		Tprice=35*qty;
		break;
	case 'd':
		Tprice=40*qty;
		break;
	case 'q':
		Tprice=45*qty;
		break;
	default:
		printf("\n---Error:Please Enter Valid Book Type---");
		break;
	}
	
	return Tprice;
}

float getDiscount (float Tprice)
{
	float d;
	
	if(Tprice>=5000)
	{
		d=Tprice*10/100;
	}
	else if(Tprice>=2000)
	{
		d=Tprice*05/100;
	}
	else if(Tprice>=500)
	{
		d=Tprice*2/100;
	}
	else
	{
		d=0;
	}
	
	return d;
}
