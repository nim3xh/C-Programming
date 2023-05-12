#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char x[20];
	
	printf("Enter month number:");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:
		strcpy(x,"January");
		break;
	case 2:
		strcpy(x,"February");
		break;
	case 3:
		strcpy(x,"March");
		break;
	case 4:
		strcpy(x,"April");
		break;
	case 5:
		strcpy(x,"May");
		break;
	case 6:
		strcpy(x,"June");
		break;
	case 7:
		strcpy(x,"july");
		break;
	case 8:
		strcpy(x,"Agust");
		break;
	case 9:
		strcpy(x,"September");
		break;
	case 10:
		strcpy(x,"October");
		break;
	case 11:
		strcpy(x,"November");
		break;
	case 12:
		strcpy(x,"December");
		break;
	default:
		strcpy(x,"Null");
		printf("Error:Please Enter number between 1-12");
		break;
	}
	printf("\nMonth Name:%s\n",x);
	return 0;
}
