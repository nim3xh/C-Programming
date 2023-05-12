#include<stdio.h>
int main()
{
	char var1;
	int var2;
	float var3;
	double var4,value;
	
	printf("Enter var1:");
	scanf("%c",&var1);
	
	printf("Enter var2:");
	scanf("%d",&var2);
	
	printf("Enter var3:");
	scanf("%f",&var3);
	
	printf("Enter var4:");
	scanf("%lf",&var4);
	
	value=var3+(float)var2;
	
	printf("\nValue of var1:\t\t%c\nValue of var2:\t\t%d\nValue of var3:\t\t%f\nValue of var4:\t\t%lf\nSum of floats:\t\t%lf\n",var1,var2,var3,var4,value);
	return 0;
}
	
	
