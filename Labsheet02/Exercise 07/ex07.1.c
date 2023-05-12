#include<stdio.h>
int main()
{
	const int inches_per_foot=12;
	float feet,inches;
	
	printf("Enter size in inches:");
	scanf("%f",&inches);
	
	feet=inches/inches_per_foot;
	
	printf("Feet:%.2f\n",feet);
	return 0;
}
