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
	
	if (op=='+')
		{
		x=a+b;
		}
	else
		{
		if (op=='-')
			{
			x=a-b;
			}
		else
			{
				if (op=='/')
					{
					x=a/b;
					}
				else
					{
					if (op=='*')
						{
						x=a*b;
						}
					else
						{
						printf("Please enter valid operatior\n");
						}
					}
			}
		}
	printf("Answer:%.2f\n",x);
	
	return 0;
}
