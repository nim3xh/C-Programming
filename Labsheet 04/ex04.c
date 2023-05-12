#include<stdio.h>
#define pi 3.14
#include<math.h>
int main()
{
	float a,b,c,r,C;
	
	printf("Enter length of a:");
	scanf("%f",&a);
	printf("Enter length of b:");
	scanf("%f",&b);
	printf("Enter angle of C:");
	scanf("%f",&c);
	
	r=(c/180)*pi;
	
	C=sqrt(pow(a,2)+pow(b,2)-(2*a*b*cos(r)));
	
	printf("Length of c is:%.2f\n",C);
	
	return 0;
	
}
