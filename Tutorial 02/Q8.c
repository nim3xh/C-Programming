#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter length of a:");
	scanf("%f",&a);
	printf("Enter length of c:");
	scanf("%f",&b);
	
	c=sqrt(pow(a,2)+pow(b,2));
	
	printf("Length of c(hypotenuse) is:%.2f",c);
	
	return 0;
}
