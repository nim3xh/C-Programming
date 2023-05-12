#include<stdio.h>
#define PI 3.14
int main()
{
	//const float pi 22.0/7;
	float r,D,C,A;
	printf("Enter radius:");
	scanf("%f",&r);
	
	D=2*r;
	C=2*PI*r;
	A=PI*r*r;
	
	printf("Diameter:%.2f\n",D);
	printf("Circumference:%.2f\n",C);
	printf("Area:%.2f\n",A);
	return 0;
}
	
	

