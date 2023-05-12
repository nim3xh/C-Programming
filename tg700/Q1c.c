#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14

int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("Enter Your Input like this \"./Q1c.c [length of a] [length of b] [C angle in degrees]\"\n");
		exit(1);
	}
	
	/*To Convert runtime inputs to integer*/ 

	int a=atoi(argv[1]); //length of a
	int b=atoi(argv[2]); //length of b
	int C=atoi(argv[3]); //C angle

	float rad;

	rad=(float)C/180*pi;  //for find angle C in radians

	float c;

	c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(rad)); //to find length of c

	printf("Lenght of c is = %.2f\n",c); //to display length of c
	
	return 0;
}
