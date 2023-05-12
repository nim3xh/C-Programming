#include<stdio.h>
int factLoop(int n);
int main()
{
	int n,factorial;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	factorial=factLoop(n);
	
	printf("\nFactorial of %d is: %d\n\n",n,factorial);
	
	return 0;
}

int factLoop(int n)
{
	int factorial;
	if (n==1 || n==0)
		factorial=1;
	else
		factorial=n*factLoop(n-1);
	return factorial;
}
