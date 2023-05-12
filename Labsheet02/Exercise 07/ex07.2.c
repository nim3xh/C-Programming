#include<stdio.h>
#define pi 3.143
int main()
{
	float r,c;
	
	printf("Enter radius:");
	scanf("%f",&r);
	
	c=2*pi*r;
	
	printf("Circumference:%.2f\n",c);
	return 0;
}

