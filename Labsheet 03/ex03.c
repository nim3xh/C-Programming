#include<stdio.h>
int main()
{
	float PI=3.14285714286;
	float volume;
	int radius;
	printf("Enter radius value:\n");
	scanf("%d",&radius);
	volume=(4.0/3.0)*PI*(radius*radius*radius);
	printf("Volume is:%.2f\n",volume);
	return 0;
}
