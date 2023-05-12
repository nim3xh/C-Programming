#include<stdio.h>

int recursiveFunction(int n);

int main()
{
	int n,sum=0;
	
	printf("This program helps you to find\nSum of all natural numbers between 1 to 'n' value\n\n------------------------------------\n\n");
	printf("Enter Number for n to find sum:");
	scanf("%d",&n);
	
	sum=recursiveFunction(n);
	
	printf("\nSum of all natural numbers 1 to %d: %d\n\n---------------------\n",n,sum);
	
	return 0;
}

int recursiveFunction(int n)
{
	int sum=0;
	if (n==0)
	{
		return 0;
	}	
	else
	{
		sum=n+recursiveFunction(n-1);
	}
	return sum;
}
