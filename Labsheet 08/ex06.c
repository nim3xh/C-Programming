#include<stdio.h>

int my_add();
int my_multi();
int my_square();
int my_math();

int main()
{
	int add,multi,square,math;
	
	printf("\n----Addition of two numbers----\n\n");
	add=my_add();
	printf("\nSum is: %d\n\n-------------------------\n",add);
	
	printf("\n----Multiplication of two numbers----\n\n");
	multi=my_multi();
	printf("\nMultiplication is: %d\n\n-------------------------\n",multi);
	
	printf("\n----Square of a number----\n\n");
	square=my_square();
	printf("\nSquare is: %d\n\n-------------------------\n",square);
	
	printf("\n----Mathematical Expression----\n\n");
	math=my_math();
	printf("\nResult of this mathematical expression is: %d\n\n-------------------------\n",math);
	
	return 0;
}

int my_add()
{
	int a,b,sum;
	
	printf("Enter Number 1:");
	scanf("%d",&a);
	
	printf("Enter Number 2:");
	scanf("%d",&b);
	
	sum=a+b;
	
	return sum;
}

int my_multi()
{
	int a,b;
	
	printf("Enter Number 1:");
	scanf("%d",&a);
	
	printf("Enter Number 2:");
	scanf("%d",&b);
		
	return a*b;
}

int my_square()
{
	int n;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	return n*n;
}

int my_math()
{
	int answer=(3*4+5*7);
	return answer*answer;
}
