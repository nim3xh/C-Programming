#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,tot,product,dif,rem; //a for first number and b for second number
	int div; //for division
	
	printf("Enter First Number:");
	scanf("%f",&a); //get value for first number
	printf("Enter Second Number:");
	scanf("%f",&b); //get value for second number
	
	tot=a+b; //sum
	product=a*b; //product
	
	if (a>b) //for find bigger number to find difference
	{
		dif=a-b;
	}
	else
	{
		dif=b-a;
	}
	
	div=a/b; //quotient
	rem=fmod(a,b); //remainder
	
	printf("Sum:%.2f\nProduct:%.2f\nDifference:%.2f\nQuotient:%d\nRemainder:%.2f\n",tot,product,dif,div,rem); //to print answers
	
	return 0;
	
}
