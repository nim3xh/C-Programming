#include<stdio.h>
int main()
{
	float F,C;
	printf("....Celsius To Fahrenheit....\n");
	printf("Enter temp in celsius:");
	scanf("%f",&C);
	F=(C*9/5)+32;
	printf("Fahrenheit:%.1f\n",F);
	return 0;
}
