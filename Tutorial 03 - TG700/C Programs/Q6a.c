#include<stdio.h>
float GetTotalPrice(char bookType, int qty);
int main()
{
	int qty; //for quantity
	char bookType; //for type
	float Tprice;
	
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
	
	printf("\n\nTotal Price is: Rs %.2f\n",Tprice);
	
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
		printf("Error:Please Enter Valid Book Type");
		break;
	}
	
	return Tprice;
}
