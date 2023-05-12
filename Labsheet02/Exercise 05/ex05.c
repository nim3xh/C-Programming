#include<stdio.h>
int main()
{
	int x,y,z,result;
	float average;
	printf("Enter Values for x:");
	scanf("%d",&x);
	printf("Enter Values for y:");
	scanf("%d",&y);
	printf("Enter Values for z:");
	scanf("%d",&z);
	
	result=x*y*z;
	
	printf("\nThe product is:%d",result);
	
	average=(x+y+z)/3.0;
	
	printf("\nThe average is:%f\n",average);
}
