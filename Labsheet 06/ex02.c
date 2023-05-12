#include<stdio.h>
int main()
{
	int a,b,max;
	
	printf("Input first number:");
	scanf("%d",&a);
	
	printf("Input second number:");
	scanf("%d",&b);
	
	if (a>b)
	{
	max=a;
	}
	else
	{
	max=b;
	}
	
	printf("Maximum number is %d\n",max);
	
	return 0;
}
