#include<stdio.h>
int main()
{
	float l,w,A,P;
	printf("Enter Length:");
	scanf("%f",&l);
	printf("Enter width:");
	scanf("%f",&w);
	
	A=l*w;
	P=2*(l+w);
	
	printf("Area: %.2f",A);
	printf("Perimete: %.2f",P);
	
	return 0;
}
