#include<stdio.h>
int main()
{
	float num1,num2,max;
	
	printf("Enter two numbers:");
	scanf("%f%f",&num1,&num2);
	
	max=(num1>num2)?num1:num2;
	
	printf("Maximum Number=%.2f",max);
	
	return 0;
}
