#include<stdio.h>
#include<math.h>

double answer=0;

double calpower();
double calsqroot();
double calexp();
double calround();
double callog();

int main()
{
	int n;
	char choice;
	
	printf("\n------------------------------------\n");
	printf("Scientific Calculator\n");
	printf("------------------------------------\n");
	printf("1.Power\n2.Square Root\n3.Exponential\n4.Log\n5.Round\n");
	printf("Enter the operation number:");
	scanf("%d",&n);
	printf("------------------------------------\n");
	
	switch(n)
	{
	case 1:
		answer=calpower();
		break;
	case 2:
		answer=calsqroot();
		break;
	case 3:
		answer=calexp();
		break;
	case 4:
		answer=callog();
		break;
	case 5:
		answer=calround();
		break;
	default:
		printf("INVALID OPTION NUMBER");
		answer=0;
		break;
	}
	
	printf("\n\nThe result is:%.2lf",answer);
	
	printf("\n-----------------------------------\n\n");
	
	printf("Do you want to continue?Y/N:");
	scanf(" %c",&choice);
	
	switch(choice)
	{
	case 'Y':
	case 'y':
		main();
		break;
	case 'N':
	case 'n':
		break;
	}
	
	return 0;
}

double calpower()
{
	double e,b;
	
	printf("Enter base:");
	scanf("%lf",&b);
	
	printf("Enter Exponent:");
	scanf("%lf",&e);
	
	answer=pow(b,e);
	
	return answer;
}
double calsqroot()
{
	double n;
	
	printf("Enter Number:");
	scanf("%lf",&n);
	
	answer=sqrt(n);
	
	return answer;
}
double calexp()
{
	double n;
	
	printf("Enter Number:");
	scanf("%lf",&n);
	
	answer=exp(n);
	
	return answer;
	
}
double calround()
{
	double n;
	
	printf("Enter Number:");
	scanf("%lf",&n);
	
	answer=round(n);
	
	return answer;
}
double callog()
{
	double n;
	
	printf("Enter Number:");
	scanf("%lf",&n);
	
	answer=log(n);
	
	return answer;
}
