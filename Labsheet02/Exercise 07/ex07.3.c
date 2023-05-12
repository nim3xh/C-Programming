#include<stdio.h>
#define cm 100
#define km 1000
int main()
{
	int m,dcm;
	float dkm;
	
	printf("Enter Distance in meters:");
	scanf("%d",&m);
	
	dcm=m*cm;
	dkm=m/(float)km;
	
	printf("Centimeters:\t%d\nkilometer:\t%.3f\n",dcm,dkm);
	
	return 0;
}
