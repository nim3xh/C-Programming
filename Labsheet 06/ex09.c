#include<stdio.h>
#include<string.h>
int main()
{
	int n,nd;
	char x[20];
	
	printf("Enter month number:");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:
		strcpy(x,"January");
		nd=31;
		break;
	case 2:
		strcpy(x,"February");
		nd=28;
		break;
	case 3:
		strcpy(x,"March");
		nd=31;
		break;
	case 4:
		strcpy(x,"April");
		nd=30;
		break;
	case 5:
		strcpy(x,"May");
		nd=31;
		break;
	case 6:
		strcpy(x,"June");
		nd=30;
		break;
	case 7:
		strcpy(x,"july");
		nd=31;
		break;
	case 8:
		strcpy(x,"Agust");
		nd=31;
		break;
	case 9:
		strcpy(x,"September");
		nd=30;
		break;
	case 10:
		strcpy(x,"October");
		nd=31;
		break;
	case 11:
		strcpy(x,"November");
		nd=30;
		break;
	case 12:
		strcpy(x,"December");
		nd=31;
		break;
	default:
		strcpy(x,"Null");
		printf("Error:Please Enter number between 1-12");
		break;
	}
	printf("\nMonth Name:%s\nNumber of dates:%d\n",x,nd);
	return 0;
}
