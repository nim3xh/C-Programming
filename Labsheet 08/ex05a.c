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
	int factorial=1,i;
	for(i=1;i<=n;i++)
	{
	factorial=factorial*i;
	}
	return factorial;
}
