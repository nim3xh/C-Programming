#include<stdio.h>
int main()
{
	float SI,P,T,R;
	
	printf("Enter principle amount:");
	scanf("%f",&P);
	printf("Enter time:");
	scanf("%f",&T);
	printf("Enter Rate:");
	scanf("%f",&R);
	
	SI=(P*T*R)/100;
	
	printf("Simple Interest:%.2f\n",SI);
	return 0;
}
