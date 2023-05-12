#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter Number 01:");
	scanf("%f",&a);
	printf("Enter Number 02:");
	scanf("%f",&b);
	if (a>b)
		{
			printf("Smallest Number is:%.2f",b);
		}
	else
		{
			printf("Smallest Number is:%.2f",a);
		}
	return 0;
}
