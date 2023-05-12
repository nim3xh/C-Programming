#include<stdio.h>
int main()
{
	int a,b,temp;
	
	printf("Enter Number for a:");
	scanf("%d",&a);
	printf("Enter Number for b:");
	scanf("%d",&b);
	
	printf("Numbers before swap:\t%d\t%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nNumbers after swap:\t%d\t%d\n",a,b);
	
	return 0;
}
