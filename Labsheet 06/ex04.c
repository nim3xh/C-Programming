#include<stdio.h>
int main()
{
	float a,b,x;
	char op;
	
	printf(" Enter the first Number:");
	scanf("%f",&a);
	
	printf(" Enter operator:");
	scanf(" %c",&op);
	
	printf("Enter second Number:");
	scanf("%f",&b);
	
	switch(op)
	{
	case '+':
		x=a+b;
		printf("Answer:%.2f\n",x);
		break;
	case '-':
		x=a-b;
		printf("Answer:%.2f\n",x);
		break;
	case '/':
		x=a/b;
		printf("Answer:%.2f\n",x);
		break;
	case '*':
		x=a*b;
		printf("Answer:%.2f\n",x);
		break;
	default:
		printf("Please enter valid operatior\n");
		break;
	}
	
	
	
	return 0;
}
	
