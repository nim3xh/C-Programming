#include<stdio.h>
void main()
{
	float a,b,c,x;
	a=9;
	b=12;
	c=3;
	x=a-b/3+c*2-1;
	printf("x=%.2f\n",x);
	
	x=a-b/(3+c)*(2-1);
	printf("x=%.2f\n",x);
	
	x=(a-b)/3+c*2-1;
	printf("x=%.2f\n",x);
}
