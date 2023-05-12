#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("Input first number:");
	scanf("%d",&a);
	
	printf("Input second number:");
	scanf("%d",&b);
	
	printf("Input second number:");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
	max=a;
	}
	else if (b>c)
	{
	max=b;
	}
	else
	{
	max=c;
	}
	
	printf("Maximum number is %d\n",max);
	
	return 0;
}
