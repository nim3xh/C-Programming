#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,CI,x;
	printf("Enter principle amount:");
	scanf("%f",&p);
	
	printf("Enter Time:");
	scanf("%f",&t);
	
	printf("Enter Rate:");
	scanf("%f",&r);
	
	x=1+(r/100);
	
	CI=p*pow(x,t)-p;
	
	printf("Compound interest is:%.2f\n",CI);
	
	return 0;
}
