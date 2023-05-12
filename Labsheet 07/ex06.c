#include<stdio.h>
int main()
{
	int op;
	float n1,n2,x;
	
	printf("My Calculator\n");
	printf("____________________________________\n");
	printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n");
	
	printf("Enter your option:");
	scanf("%d",&op);
	
	do
	{
		printf("Enter numbers:");
		scanf("%f %f",&n1,&n2);
	
		switch(op)
		{
		case 1:
			x=n1+n2;
			break;
		case 2:
			x=n1-n2;
			break;
		case 3:
			x=n1*n2;
			break;
		case 4:
			x=n1/n2;
			break;
		case 5:
			break;
		}
		
		printf("\n\nThe result is: %.2f\n",x);
		printf("__________________________________\n");
		
		printf("Enter your option:");
		scanf("%d",&op);
		
	}
	while (op!=5);
	return 0;
}
	
